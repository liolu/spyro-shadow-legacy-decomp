/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020955a0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02095930(M2C_UNK);                     /* extern */
extern M2C_UNK data_020e2614;

s32 func_020225d4(void) {
    s32 temp_r0;

    if (M2C_FIELD(&data_020e2614, s32 *, 0x42C) == 0) {
        return M2C_FIELD(&data_020e2614, s32 *, 0x42C);
    }
    temp_r0 = M2C_FIELD(&data_020e2614, s32 *, 0x42C) & 0x20;
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02095930(1);
    func_020955a0(0xA, 3, 2, 0);
    M2C_FIELD(&data_020e2614, s32 *, 0x42C) = (s32) (M2C_FIELD(&data_020e2614, s32 *, 0x42C) | 0x20);
    return (s32) &data_020e2614;
}
