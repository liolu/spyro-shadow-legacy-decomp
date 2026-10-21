#include "m2c.h"

extern s32 data_020daa7c;

s8 func_02010920(void) {
    s8 var_r0;

    if ((u32) (data_020daa7c - 0xE) <= 5U) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
