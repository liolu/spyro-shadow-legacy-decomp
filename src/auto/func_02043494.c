#include "m2c.h"

s8 func_02043494(u16 *arg0) {
    s32 var_r2;
    s8 var_r0;
    u16 *var_r0_2;
    u16 temp_r1;
    u16 var_r3;

    var_r0_2 = arg0;
    var_r3   = 0;
    var_r2   = 0x10;
    do {
        temp_r1  = *var_r0_2;
        var_r0_2 = (u16 *) ((s8 *) var_r0_2 + 2);
        var_r2 -= 1;
        var_r3 += temp_r1;
    } while (var_r2 > 0);
    if (var_r3 == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
