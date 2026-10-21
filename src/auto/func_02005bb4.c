/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020436f0(s32);                           /* extern */
extern s32 data_020bf6a0;

u32 func_02005bb4(void) {
    return (u32) (M2C_FIELD(func_020436f0(data_020bf6a0), u8 *, 0xF) << 0x18) >> 0x19;
}
