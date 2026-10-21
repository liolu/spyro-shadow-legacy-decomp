/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02009394();                                /* extern */
M2C_UNK func_0205f6e4(s32, u8);                     /* extern */
extern s32 data_020d9f8c;

void func_020088a8(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = data_020d9f8c;
    func_0205f6e4(func_02009394(), M2C_FIELD((temp_r4 + M2C_FIELD((temp_r4 + (arg0 * 2)), u16 *, 2) + (arg1 * 8)), u8 *, 8));
}
