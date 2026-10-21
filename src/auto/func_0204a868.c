#include "m2c.h"

extern M2C_UNK data_020ebce4;

s8 func_0204a868(s32 arg0) {
    s8 var_r0;

    if (((u8 *) &data_020ebce4)[arg0] != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
