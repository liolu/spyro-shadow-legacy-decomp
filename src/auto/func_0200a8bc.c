/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200a2b4(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_0200a77c(M2C_UNK, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_020129ac(M2C_UNK);                     /* extern */
s32 func_02012a64(M2C_UNK);                         /* extern */

s32 func_0200a8bc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    s32 temp_r0;

    temp_r0 = func_0200a77c(arg0, func_02012a64(arg1), arg2, arg3);
    if (temp_r0 != 0) {
        func_0200a2b4(arg0, temp_r0, arg2, arg3, arg4, arg5);
    }
    func_020129ac(arg1);
    return temp_r0;
}
