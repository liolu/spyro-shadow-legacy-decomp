/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020089dc(s32);                             /* extern */

void func_0205f4b0(void *arg0, s32 arg1) {
    if (func_020089dc(arg1) == 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    }
}
