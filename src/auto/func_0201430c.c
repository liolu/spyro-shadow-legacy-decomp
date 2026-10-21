/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020436f0(s32);                           /* extern */
extern s32 data_020bf6a0;

void func_0201430c(s32 arg0, u32 arg1) {
    u8 temp_r4;

    if (arg1 > (u32) M2C_FIELD(func_020436f0(data_020bf6a0), u8 *, 0x11)) {
        M2C_FIELD(func_020436f0(data_020bf6a0), s8 *, 0x11) = 0;
        return;
    }
    temp_r4                                             = M2C_FIELD(func_020436f0(data_020bf6a0), u8 *, 0x11);
    M2C_FIELD(func_020436f0(data_020bf6a0), s8 *, 0x11) = (s8) (temp_r4 - arg1);
}
