#include "m2c.h"

s8 func_02081d34(s32 arg0, s32 arg1) {
    s8 var_r0;

    if ((arg1 < 0) || (arg1 >= 0xD)) {
        return 0;
    }
    if (M2C_FIELD((arg0 + (arg1 * 8)), s32 *, 0xC) == 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
