#include "m2c.h"

extern s32 data_020df0fc;

s8 func_020181e4(void) {
    s8 var_r0;

    if (data_020df0fc == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
