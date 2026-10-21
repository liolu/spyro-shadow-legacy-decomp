/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208f070(s32, s32);                        /* extern */

void func_02002bd8(void *arg0, void *arg1, s32 *arg2) {
    s32 temp_r4;

    temp_r4                   = func_0208f070(M2C_FIELD(arg1, s32 *, 4), *arg2);
    M2C_FIELD(arg0, s32 *, 0) = func_0208f070(M2C_FIELD(arg1, s32 *, 0), *arg2);
    M2C_FIELD(arg0, s32 *, 4) = temp_r4;
}
