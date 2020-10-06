using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace WindowsFormsApplication1.Resources
{
    class sst25lf040
    {
        private int state = 0;
        private int addr = 0;
        private bool selected = false;
        private bool wrsr = false;
        private byte statusreg = _BP0|_BP1;
        private byte[] memory;
        private byte[] loadbuffer;
        private string sfilename;
        const byte _BUSY = 0x01;
        const byte _WEL = 0x02;
        const byte _BP0 = 0x04;
        const byte _BP1 = 0x08;
        const byte _AAI = 0x40;
        const byte _BPL = 0x80;
        ~sst25lf040()
        {
            System.IO.File.WriteAllBytes(sfilename, memory);
        }
        public sst25lf040(string filename)
        {
            if (System.IO.File.Exists(filename))
            {
                // If file length is less than 512k then fill it up to 512k
                loadbuffer = System.IO.File.ReadAllBytes(filename);
                memory = new byte[512 * 1024];
                Array.Copy(loadbuffer, memory, loadbuffer.GetLength(0));
            }
            else
            {
                for (int i = 0; i < 512 * 1024; i++)
                {
                    memory[i] = 0xFF;
                }
                System.IO.File.WriteAllBytes(filename, memory);
            }
            sfilename = filename;
        }
        public bool isSelected()
        {
            return selected;
        }
        public void Select()
        {
            selected = true;
        }
        public void Deselect()
        {
            selected = false;
            state = 0;
        }
        public byte BusCycle(byte d)
        {
            if (this.selected)
            {
                switch (state)
                {
                    case 0:
                        {
                            switch (d)
                            {
                                case 0x20:      // Sector Erase
                                    {
                                        if ((statusreg & _WEL) != 0) state = (d << 8);
                                        return 0xff;
                                    }
                                case 0xAF:      // Auto-increment program
                                    {
                                        if ((statusreg & _WEL) != 0)
                                        {
                                            state = (d << 8);
                                            if ((statusreg & _AAI) != 0) state |= 3;
                                        }
                                        return 0xff;
                                    }
                                case 0x02:      // Byte program
                                case 0x0b:      // High-Speed-Read
                                case 0x52:      // Block Erase

                                case 0x05:

                                case 0x03:      // Read                 +
                                case 0x90:
                                case 0xAB:
                                    {
                                        state = (d << 8);
                                        wrsr = false;
                                        return 0xff;
                                    }
                                case 0x01:      // WRSR
                                    {
                                        if (wrsr) state = (d << 8);
                                        return 0xff;
                                    }
                                // Single-cycle commands
                                case 0x06:      // Write Enable
                                    {
                                        statusreg |= _WEL;
                                        //wr_latch = true;
                                        return 0xff;
                                    }
                                case 0x04:      // Write Disable
                                    {
                                        //wr_latch = false;
                                        statusreg &= (_WEL|_AAI) ^ 0xFF;
                                        return 0xff;
                                    }
                                case 0x60:      // Chip Erase
                                    {
                                        if(((statusreg&(_BP0|_BP1))!=0x00)&&((statusreg&_WEL)!=0))
                                        {
                                            for (int i = 0; i < 512 * 1024; i++)
                                            {
                                                memory[i] = 0xff;
                                            }
                                        }
                                        return 0xff;
                                    }
                                case 0x50:      // EWSR
                                    {
                                        wrsr = true;
                                        return 0xff;
                                    }
                                default: return 0xff;
                            }
                        }

                    case 0x0100:
                        {
                            if ((statusreg & _BPL) == 0)
                            {
                                statusreg = (byte)((statusreg&0x73)|(d&0x8c));
                            }
                            return 0xff;
                        }
                    case 0x0500:        // RDSR
                        {
                            return statusreg;
                        }
                    case 0x2000:        // Sector Erase
                        {
                            state++;
                            addr = d << 16;
                            return 0xff;
                        }
                    case 0x2001:
                        {
                            state++;
                            addr |= d << 8;
                            return 0xff;
                        }
                    case 0x2002:
                        {
                            state++;
                            addr &= 0x0007F000;
                            for (int i = addr; i < addr + 4096; i++) memory[i] = 0xff;
                            statusreg &= _WEL^0xFF;
                            return 0xff;
                        }
                    case 0x2003: return 0xff;
                    case 0xAF00:
                        {
                            state++;
                            addr = d << 16;
                            return 0xff;
                        }
                    case 0xAF01:        // AAI programming
                        {
                            state++;
                            addr |= d << 8;
                            return 0xff;
                        }
                    case 0xAF02:
                        {
                            state++;
                            addr |= d;
                            addr &= 0x0007FFFF;
                            return 0xff;
                        }

                    case 0xAF03:
                        {
                            state++;
                            addr &= 0x0007FFFF;     // Just like in real FLASH
                            memory[addr] &= d;    // otherwise it won't require erasing =)
                            addr++;
                            if (addr == 0)
                            {
                                statusreg &= _AAI ^ 0xff;
                            }
                            else
                            {
                                statusreg |= _AAI;
                            }
                            return 0xff;            
                        }
                    case 0xAF04:
                        {
                            return 0xff;
                        }
                    case 0x0300:        // Read
                        {
                            state++;
                            addr = d << 16;
                            return 0xff;
                        }
                    case 0x0301:
                        {
                            state++;
                            addr |= d << 8;
                            return 0xff;
                        }
                    case 0x0302:
                        {
                            state++;
                            addr |= d;
                            addr &= 0x0007FFFF;
                            return 0xff;
                        }
                    case 0x0303:
                        {
                            addr &= 0x0007FFFF;
                            return memory[addr++];
                        }
                    case 0x9000:        // Chip ID
                    case 0xAB00:        //
                    case 0x9001:
                    case 0xAB01:
                        {
                            if (d == 0x00) state++;
                            return 0xff;
                        }
                    case 0x9002:
                    case 0xAB02:
                        {
                            if (d == 0x01) state += 2;
                            if (d == 0x00) state++;
                            return 0xff;
                        }
                    case 0x9003:        // Manufacturer ID
                    case 0xAB03:
                        {
                            state++;
                            return 0xBF;
                        }
                    case 0x9004:        // Device ID
                    case 0xAB04:
                        {
                            state--;
                            return 0x44;
                        }
                    default: return 0xff;
                }
            }
            else
            {
                return 0xff;
            }
        }
    }
}
