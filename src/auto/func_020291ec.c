/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028f64(M2C_UNK, u16);                /* extern */

void func_020291ec(M2C_UNK arg0, u32 arg1, s32 arg2) {
    u32 var_r1;

    if (arg1 == 0) {
        return;
    }
    if (arg2 != 0) {
        var_r1 = arg1 >> 5;
    } else {
        var_r1 = arg1 >> 6;
    }
    func_02028f64(arg0, (u16) var_r1);
}
