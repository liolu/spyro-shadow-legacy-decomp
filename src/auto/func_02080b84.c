/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02080bc4(M2C_UNK, M2C_UNK);                /* extern */

s8 func_02080b84(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s8 var_r0;

    if (func_02080bc4(arg1, arg2) < 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
