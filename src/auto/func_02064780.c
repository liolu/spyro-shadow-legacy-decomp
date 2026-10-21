/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020062a0();                                /* extern */
s32 func_02017a58(s32, s32);                        /* extern */

s32 func_02064780(void *arg0) {
    s32 var_r4;

    var_r4 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (var_r4 != 0) {
        if (var_r4 != 0) {
            var_r4 += 0x90;
        }
        if (func_02017a58(func_020062a0() + 4, var_r4) == 0) {
            M2C_FIELD(arg0, s32 *, 0x6C) = 0;
        }
    }
    return M2C_FIELD(arg0, s32 *, 0x6C);
}
