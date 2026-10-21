/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02084aa8(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_0208504c(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_020f6eb0;
extern M2C_UNK data_020f6eb4;

void func_020800ac(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0                             = func_02084aa8(arg0, arg1 - arg0, 2);
    M2C_FIELD(&data_020f6eb0, s32 *, 0) = temp_r0;
    func_0208504c(&data_020f6eb4, temp_r0, 4);
    M2C_FIELD(&data_020f6eb0, s32 *, 0x18) = arg0;
    M2C_FIELD(&data_020f6eb0, s32 *, 0x1C) = arg1;
}
