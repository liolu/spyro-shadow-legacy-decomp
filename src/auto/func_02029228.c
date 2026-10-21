/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02029004(M2C_UNK, u32);                /* extern */

void func_02029228(M2C_UNK arg0, s32 arg1, s32 arg2) {
    u32 var_r1;

    if (arg2 != 0) {
        var_r1 = (u32) (arg1 << 0xB) >> 0x10;
    } else {
        var_r1 = (u32) (arg1 << 0xA) >> 0x10;
    }
    func_02029004(arg0, var_r1);
}
