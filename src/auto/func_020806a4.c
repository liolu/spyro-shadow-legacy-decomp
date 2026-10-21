/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020806a4(void *arg0, u32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 0x8:
            M2C_FIELD(arg0, s32 *, 0x24) = 0;
            return;
        case 0x20:
            M2C_FIELD(arg0, s32 *, 0x24) = 2;
            return;
        case 0x80:
            M2C_FIELD(arg0, s32 *, 0x24) = 4;
            return;
        case 0x200:
            M2C_FIELD(arg0, s32 *, 0x24) = 6;
            return;
        case 0x400:
            M2C_FIELD(arg0, s32 *, 0x24) = 7;
            return;
        case 0x10:
            M2C_FIELD(arg0, s32 *, 0x24) = 1;
            return;
        case 0x40:
            M2C_FIELD(arg0, s32 *, 0x24) = 3;
            return;
        case 0x100:
            M2C_FIELD(arg0, s32 *, 0x24) = 5;
            return;
    }
}
