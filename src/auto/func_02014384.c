/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020436f0(s32);                           /* extern */
extern s32 data_020bf6a0;

u8 func_02014384(void) {
    return M2C_FIELD(func_020436f0(data_020bf6a0), u8 *, 0x11);
}
