/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02012f28(M2C_UNK, s32, s32, M2C_UNK);  /* extern */
s32 func_02013868(M2C_UNK);                         /* extern */
s32 func_020138a0(M2C_UNK);                         /* extern */

void func_0201341c(M2C_UNK arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    s32 var_r5;
    s32 var_r6;
    u32 temp_r0;
    u32 temp_r0_2;

    var_r6 = arg1;
    var_r5 = arg2;
    if (arg4 == 1) {
        temp_r0 = func_020138a0(arg3) + 1;
        var_r6 -= (s32) (temp_r0 + (temp_r0 >> 0x1F)) >> 1;
    } else if (arg4 == 2) {
        var_r6 -= func_020138a0(arg3);
    }
    if (arg4 == 4) {
        temp_r0_2 = func_02013868(arg3) + 1;
        var_r5 -= (s32) (temp_r0_2 + (temp_r0_2 >> 0x1F)) >> 1;
    } else if (arg4 == 8) {
        var_r5 -= func_02013868(arg3);
    }
    func_02012f28(arg0, var_r6, var_r5, arg3);
}
