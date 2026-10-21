/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_02019bcc(s32);                            /* extern */
extern s32 data_020df0fc;

s8 func_02019ad0(s32 arg0) {
    s8 var_r0;

    if (arg0 == *func_02019bcc(data_020df0fc)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
