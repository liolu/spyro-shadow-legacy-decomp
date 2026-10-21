#include "m2c.h"

s8 func_020831f0(void *arg0) {
    s8 var_r0;

    if (M2C_FIELD(arg0, u8 *, 0x11) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
