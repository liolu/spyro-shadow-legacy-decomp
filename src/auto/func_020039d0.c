#include "m2c.h"

void func_020039d0(void *arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (((u32) (M2C_FIELD(arg0, s32 *, 0xA8) * 4) >> 0x1F) != 0) {
        var_r1 = 0 - var_r1;
    }
    M2C_FIELD(arg0, s32 *, 0x74) = var_r1;
}
