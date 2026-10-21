/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_02029284(M2C_UNK, u16, u32);               /* extern */

void func_02003e3c(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s16 *, 0xDE) =
        func_02029284(arg1, M2C_FIELD(arg0, u16 *, 0xDC), (u32) (M2C_FIELD(arg0, s32 *, 0xA8) << 0x12) >> 0x1F);
}
