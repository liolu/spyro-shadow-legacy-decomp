#include "m2c.h"

extern M2C_UNK data_020e1e9c;

s8 func_0201b650(s32 arg0) {
    s8 var_r0;

    if (M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020e1e9c + (arg0 << 5))), s32 *, 4) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
