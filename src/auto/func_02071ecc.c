/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02080bb8(s32, M2C_UNK, u32);           /* extern */
u32 func_02080be8(M2C_UNK);                         /* extern */

void func_02071ecc(s32 arg0, s32 arg1, M2C_UNK arg2) {
    u32 var_r4;

    var_r4 = func_02080be8(arg2);
    if (var_r4 > 0x13U) {
        var_r4 = 0x13;
    }
    func_02080bb8(arg1, arg2, var_r4);
    M2C_FIELD((arg1 + var_r4), s8 *, 1) = 0;
}
