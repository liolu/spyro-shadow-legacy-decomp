/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200820c();                    /* extern */
s32 func_02009394();                                /* extern */
s32 func_02019620();                                /* extern */
M2C_UNK func_0205f6e4();                     /* extern */
extern s32 data_020d9f90;

void func_02008130(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r2;
    void *temp_r4;

    temp_r2 = data_020d9f90 + M2C_FIELD((data_020d9f90 + (arg0 * 2)), u16 *, 2);
    temp_r4 = (void *) (temp_r2 + M2C_FIELD((temp_r2 + (arg1 * 2)), u16 *, 2));
    if ((M2C_FIELD(temp_r4, s32 *, 8) == 4) && (func_02019620() == 0)) {
        func_0205f6e4(func_02009394(), M2C_FIELD(temp_r4, u8 *, 0x28));
    } else if ((M2C_FIELD(temp_r4, s32 *, 8) == 5) && (func_02019620() == 0) &&
               ((temp_r0 = func_0200820c(M2C_FIELD(temp_r4, u16 *, 0x10), 2), (temp_r0 == 0xA)) || (temp_r0 == 0xB) ||
                (temp_r0 == 0x46))) {
        func_0205f6e4(func_02009394(), M2C_FIELD(temp_r4, u8 *, 0x15));
    }
    M2C_FIELD(temp_r4, s32 *, 0) = 0;
}
