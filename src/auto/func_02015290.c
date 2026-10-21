/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02015290(u32 arg0) {
    switch (arg0) {                                 /* irregular */
        case 0x96:
        case 0x99:
            return 0x20;
        case 0xD1:
            return 0x2C;
        case 0xD2:
            return 0x2C;
        case 0xD3:
            return 0x14;
        default:
            return -1;
    }
}
