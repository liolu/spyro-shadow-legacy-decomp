/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020436f0(s32);                           /* extern */
extern s32 data_020bf6a0;

void func_020142c0(s32 arg0, s32 arg1) {
    u8 temp_r4;

    if (arg1 == 0) {
        return;
    }
    temp_r4                                             = M2C_FIELD(func_020436f0(data_020bf6a0), u8 *, 0x11);
    M2C_FIELD(func_020436f0(data_020bf6a0), s8 *, 0x11) = (s8) (arg1 + temp_r4);
}
