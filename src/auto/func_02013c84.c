/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020436f0(s32);                           /* extern */
extern s32 data_020bf6a0;

s32 func_02013c84(void) {
    return M2C_FIELD(func_020436f0(data_020bf6a0), s32 *, 8);
}
