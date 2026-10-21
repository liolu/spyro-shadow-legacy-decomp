#include "m2c.h"

void func_020039e8(void *arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (((u32) (M2C_FIELD(arg0, s32 *, 0xA8) * 8) >> 0x1F) != 0) {
        var_r1 = 0 - var_r1;
    }
    M2C_FIELD(arg0, s32 *, 0x70) = var_r1;
}
