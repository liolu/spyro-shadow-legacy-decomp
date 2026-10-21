/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020955a0(u8, u8, u8, M2C_UNK);         /* extern */
M2C_UNK func_02095930(M2C_UNK);                     /* extern */
extern M2C_UNK data_020e2614;

s32 func_02022d18(void) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(&data_020e2614, s32 *, 0xC) & 4;
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02095930(1);
    func_020955a0(M2C_FIELD(&data_020e2614, u8 *, 0x580), M2C_FIELD(&data_020e2614, u8 *, 0x581),
                  M2C_FIELD(&data_020e2614, u8 *, 0x582), 0);
    *(s16 *) 0x0400010A                   = 0;
    *(s16 *) 0x0400010E                   = 0;
    M2C_FIELD(&data_020e2614, s32 *, 0xC) = (s32) (M2C_FIELD(&data_020e2614, s32 *, 0xC) | 4);
    return (s32) &data_020e2614;
}
