#include "m2c.h"

extern M2C_UNK data_020daac0;

s8 func_02011e74(void) {
    s8 var_r0;

    if (*M2C_FIELD(&data_020daac0, u8 **, 0x2C) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
