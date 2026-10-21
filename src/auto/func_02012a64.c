/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020126d0(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_02012854(s32, s32);                        /* extern */

s32 func_02012a64(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (var_r4 < 0xC83) {
        var_r4 = func_02012854(var_r4, func_020126d0(arg0, 0, 0));
    }
    return var_r4;
}
