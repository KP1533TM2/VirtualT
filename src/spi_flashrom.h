#ifndef SPI_FLASHROM_H
#define SPI_FLASHROM_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

typedef struct {
	uint8_t *rom; // ROM contents
	uint32_t addr_mask; // mask used to overflow address pointer
	uint32_t sector_mask; // mask used to specify sector size
	uint32_t page_mask;
	uint32_t addr_ptr;
	bool cs;
	bool wrsr;
	uint8_t statusreg;
	uint16_t state;	
	int count; // internal
} spi_flash_rom_internals_t;

typedef struct {
	uint8_t mfr; // manufacturer code
	uint16_t id16; // chip id long
	uint16_t id8; // chip id short
	size_t sec_size; // sector size
	size_t page_size;
	size_t cap; // size in bytes
	const char* filename; // optional filename to keep contents
	spi_flash_rom_internals_t* i;
} spi_flash_t;

// predefined real world spi flash chips:
extern const spi_flash_t en25f80;

void spi_flash_init(spi_flash_t *flash);
void spi_flash_deinit(spi_flash_t *flash);
void spi_flash_cs(spi_flash_t *flash, bool cs);

uint8_t spi_bus_cycle(spi_flash_t *flash, uint8_t d);

#endif // SPI_FLASHROM_H
