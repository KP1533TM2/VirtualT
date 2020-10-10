#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "spi_flashrom.h"

#define _BUSY 0x01
#define _WEL  0x02
#define _BP0  0x04
#define _BP1  0x08
#define _AAI  0x40
#define _BPL  0x80

const spi_flash_t en25f80 = { .mfr=0x1c, .id16=0x3114, .id8=0x13, .cap=1024*1024, .sec_size=4096, .page_size=256}; // Eon Silicon Solution, Inc., EN25F80

void spi_flash_init(spi_flash_t *flash) {
	
	size_t array_size = sizeof(uint8_t)*(flash->cap);
	
	flash->i = malloc(sizeof(spi_flash_rom_internals_t));
	
	flash->i->rom = malloc(array_size);
	memset(flash->i->rom, 0xff, array_size); // "erase" contents
	
	flash->i->cs = false;
	flash->i->wrsr = false;
	flash->i->addr_ptr = 0;
	flash->i->addr_mask = flash->cap-1;
	flash->i->statusreg = 0;
	
	// following assumes we have sizes of only powers of 2
	flash->i->sector_mask = flash->sec_size-1;
	flash->i->page_mask = flash->page_size-1;

    FILE *file;

	if(flash->filename) {
		printf("file %s specified, ", flash->filename);
		if(file = fopen(flash->filename, "rb")) {
		    fread(flash->i->rom, sizeof(uint8_t), flash->cap, file);
		    fclose(file);
            printf("loading...\n");
		} else {
		    if(file = fopen(flash->filename, "wb")) {
    		    printf("creating...\n");
		        fwrite(flash->i->rom, sizeof(uint8_t), flash->cap, file);
		    } else {
        		printf("failed to create/open file.\n");
		    }
		}
	} else {
		printf("file NOT specified\n");
	}
	return;
};

void spi_flash_cs(spi_flash_t *flash, bool cs) {
    if(!cs) flash->i->state = 0;
	flash->i->cs = cs;
}

uint8_t spi_bus_cycle(spi_flash_t *flash, uint8_t d) {
    if (flash->i->cs == false) {
	    return 0xff;
    }
    
	spi_flash_rom_internals_t* i = flash->i;
    
    switch (i->state)
    {
        case 0x0200:        // byte/page program
            {
                i->state++;
                i->addr_ptr = d << 16;
                return 0xff;
            }
        case 0x0201:
            {
                i->state++;
                i->addr_ptr |= d << 8;
                return 0xff;
            }
        case 0x0202:
            {
                i->state++;
                i->addr_ptr |= d;
                i->addr_ptr &= i->addr_mask;
                i->count = 0; // take up to 256 bytes from SPI bus
                return 0xff;
            }
        case 0x0203:
            {
                if(i->count<flash->page_size) {
                    i->count++;
                    i->rom[i->addr_ptr] &= d;
                    uint32_t addr_in_page = i->addr_ptr & i->page_mask;
                    addr_in_page++;
                    addr_in_page &= i->page_mask;
                    i->addr_ptr &= ~(i->page_mask);
                    i->addr_ptr |= addr_in_page;
                }
                return 0xff;
            }
        case 0:
            {
                switch (d)
                {
                    case 0x20:      // Sector Erase
                        {
                            if ((i->statusreg & _WEL) != 0) i->state = (d << 8);
                            return 0xff;
                        }
                    case 0x02:      // Byte program
                        {
                            if (i->statusreg & _WEL)
                            {
                                i->state = (d << 8);
                            }
                            return 0xff;
                        }
                    case 0xAF:      // Auto-increment program
                        {
                            if (i->statusreg & _WEL)
                            {
                                i->state = (d << 8);
                                if (i->statusreg & _AAI) i->state |= 3;
                            }
                            return 0xff;
                        }
                    case 0x0b:      // High-Speed-Read
                    case 0x52:      // Block Erase

                    case 0x05:

                    case 0x03:      // Read
                    case 0x90:      // Chip ID type 1
                    case 0xAB:
                        {
                            i->state = (d << 8);
                            i->wrsr = false;
                            return 0xff;
                        }
                    case 0x9f:
                        {
                            i->state = (d << 8);
                            return 0xff;
                        }
                    case 0x01:      // WRSR
                        {
                            if (i->wrsr) i->state = (d << 8);
                            return 0xff;
                        }
                    // Single-cycle commands
                    case 0x06:      // Write Enable
                        {
                            i->statusreg |= _WEL;
                            //wr_latch = true;
                            return 0xff;
                        }
                    case 0x04:      // Write Disable
                        {
                            //wr_latch = false;
                            i->statusreg &= (_WEL|_AAI) ^ 0xFF;
                            return 0xff;
                        }
                    case 0x60:      // Chip Erase
                        {
                            if(((i->statusreg&(_BP0|_BP1))!=0x00)&&((i->statusreg&_WEL)!=0))
                            {
	                            size_t array_size = sizeof(uint8_t)*(flash->cap);
                            	memset(flash->i->rom, 0xff, array_size); // "erase" contents
                            }
                            return 0xff;
                        }
                    case 0x50:      // EWSR
                        {
                            i->wrsr = true;
                            return 0xff;
                        }
                    default: return 0xff;
                }
            }

        case 0x0100:
            {
                if ((i->statusreg & _BPL) == 0)
                {
                    i->statusreg = (uint8_t)((i->statusreg&0x73)|(d&0x8c));
                }
                return 0xff;
            }
        case 0x0500:        // RDSR
            {
                return i->statusreg;
            }
        case 0x2000:        // Sector Erase
            {
                i->state++;
                i->addr_ptr = d << 16;
                return 0xff;
            }
        case 0x2001:
            {
                i->state++;
                i->addr_ptr |= d << 8;
                return 0xff;
            }
        case 0x2002:
            {
                i->state++;
                i->addr_ptr &= i->addr_mask;
                i->addr_ptr |= ~(i->sector_mask);
                for (int j = i->addr_ptr; j < i->addr_ptr + 4096; j++) i->rom[j] = 0xff;
                i->statusreg &= _WEL^0xFF;
                return 0xff;
            }
        case 0x2003: return 0xff;
        case 0xAF00:
            {
                i->state++;
                i->addr_ptr = d << 16;
                return 0xff;
            }
        case 0xAF01:        // AAI and byte/page programming
            {
                i->state++;
                i->addr_ptr |= d << 8;
                return 0xff;
            }
        case 0xAF02:
            {
                i->state++;
                i->addr_ptr |= d;
                i->addr_ptr &= i->addr_mask;
                return 0xff;
            }

        case 0xAF03:
            {
                i->state++;
                i->addr_ptr &= i->addr_mask;     // Just like in real FLASH
                i->rom[i->addr_ptr] &= d;    // otherwise it won't require erasing =)
                i->addr_ptr++;
                if (i->addr_ptr == 0)
                {
                    i->statusreg &= _AAI ^ 0xff;
                }
                else
                {
                    i->statusreg |= _AAI;
                }
                return 0xff;
            }
        case 0xAF04:
            {
                return 0xff;
            }
        case 0x0300:        // Read
            {
                i->state++;
                i->addr_ptr = d << 16;
                return 0xff;
            }
        case 0x0301:
            {
                i->state++;
                i->addr_ptr |= d << 8;
                return 0xff;
            }
        case 0x0302:
            {
                i->state++;
                i->addr_ptr |= d;
                i->addr_ptr &= i->addr_mask;
                return 0xff;
            }
        case 0x0303:
            {
                i->addr_ptr &= i->addr_mask;
                return flash->i->rom[i->addr_ptr++];
            }
        case 0x9000:        // Chip ID
        case 0xAB00:        //
        case 0x9001:
        case 0xAB01:
            {
                if (d == 0x00) i->state++;
                return 0xff;
            }
        case 0x9002:
        case 0xAB02:
            {
                if (d == 0x01) i->state += 2;
                if (d == 0x00) i->state++;
                return 0xff;
            }
        case 0x9003:        // Manufacturer ID
        case 0xAB03:
            {
                i->state++;
                return flash->mfr;
            }
        case 0x9004:        // Device ID
        case 0x9f00:        // Manufacturer + 16-bit device ID
            {
                i->state++;
                return flash->mfr;
            }
        case 0x9f01:        // 16-bit device ID, high half
            {
                i->state++;
                return (flash->id16)>>8;
            }
        case 0x9f02:        // 16-bit device ID, low byte
            {
                i->state = 0x9f00;
                return (flash->id16)&0xff;
            }
        case 0xAB04:
            {
                i->state--;
                return flash->id8;
            }
        default: return 0xff;
    }

}


void spi_flash_deinit(spi_flash_t *flash) {

    FILE *file;

	if(flash->filename) {
		printf("file %s specified\n", flash->filename);
	    if(file = fopen(flash->filename, "wb")) {
	        fwrite(flash->i->rom, sizeof(uint8_t), flash->cap, file);
	    } else {
    		printf("failed to create/open file.\n");
	    }
	} else {
		printf("file NOT specified - not saving anything\n");
	}
	
	free(flash->i->rom);
	free(flash->i);
};


