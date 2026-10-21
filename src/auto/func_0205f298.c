#include "m2c.h"

s8 func_0205f298(void *arg0, s32 arg1) {
    s8 var_r0;

    if (M2C_FIELD(arg0, s32 *, 4) == arg1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
