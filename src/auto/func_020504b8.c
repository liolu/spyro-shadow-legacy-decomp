/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205382c();                                /* extern */
s32 func_0207fe74(M2C_UNK);                         /* extern */

void func_020504b8(void *arg0) {
    s32 var_r0;

    var_r0 = func_0207fe74(0x1A8);
    if (var_r0 != 0) {
        var_r0 = func_0205382c();
    }
    M2C_FIELD(arg0, s32 *, 0x44) = var_r0;
}
