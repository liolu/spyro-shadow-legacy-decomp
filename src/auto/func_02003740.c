/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020291ec(u16, u16, u8);                /* extern */

void func_02003740(void *arg0) {
    u16 temp_r0;
    u16 temp_r1;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0xDE);
    if (temp_r0 == 0xFFFF) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, u16 *, 0xDC);
    if (temp_r1 != 0) {
        func_020291ec(temp_r0, temp_r1, (u8) ((u32) (M2C_FIELD(arg0, s32 *, 0xA8) << 0x12) >> 0x1F));
    }
    M2C_FIELD(arg0, u16 *, 0xDE) = 0xFFFFU;
    M2C_FIELD(arg0, u16 *, 0xDC) = 0U;
}
