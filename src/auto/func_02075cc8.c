/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020044a0();                            /* extern */

void func_02075cc8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x74) != 0) {
        func_020044a0();
        M2C_FIELD(arg0, s32 *, 0x74) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x70) = 0;
    if (M2C_FIELD(arg0, s32 *, 0xA8) != 0) {
        func_020044a0();
        M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0xA4) = 0;
    if (M2C_FIELD(arg0, s32 *, 0xDC) != 0) {
        func_020044a0();
        M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0xD8) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x110) != 0) {
        func_020044a0();
        M2C_FIELD(arg0, s32 *, 0x110) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x10C) = 0;
    M2C_FIELD(arg0, s8 *, 0x14)  = 0;
}
