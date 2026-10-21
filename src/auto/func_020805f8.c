/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020805f8(void *arg0, u32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 0x8:
            M2C_FIELD(arg0, s32 *, 0x28) = 0;
            return;
        case 0x20:
            M2C_FIELD(arg0, s32 *, 0x28) = 2;
            return;
        case 0x80:
            M2C_FIELD(arg0, s32 *, 0x28) = 4;
            return;
        case 0x200:
            M2C_FIELD(arg0, s32 *, 0x28) = 6;
            return;
        case 0x400:
            M2C_FIELD(arg0, s32 *, 0x28) = 7;
            return;
        case 0x10:
            M2C_FIELD(arg0, s32 *, 0x28) = 1;
            return;
        case 0x40:
            M2C_FIELD(arg0, s32 *, 0x28) = 3;
            return;
        case 0x100:
            M2C_FIELD(arg0, s32 *, 0x28) = 5;
            return;
    }
}
