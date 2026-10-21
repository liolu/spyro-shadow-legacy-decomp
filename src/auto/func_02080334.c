/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02097b04(s32, M2C_UNK);                    /* extern */
M2C_UNK func_02097e90();                            /* extern */

s32 func_02080334(s32 arg0, M2C_UNK arg1) {
    s32 var_r5;

    var_r5 = arg0;
    func_02097e90();
    if (func_02097b04(var_r5, arg1) != 1) {
        var_r5 = 0;
    }
    return var_r5;
}
