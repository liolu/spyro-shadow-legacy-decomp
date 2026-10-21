#include "m2c.h"

s32 func_02072200(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r0;

    var_r0  = arg0;
    temp_r1 = *arg1;
    if (var_r0 < temp_r1) {
        var_r0 = temp_r1;
    }
    temp_r1_2 = *arg2;
    if (var_r0 > temp_r1_2) {
        var_r0 = temp_r1_2;
    }
    return var_r0;
}
