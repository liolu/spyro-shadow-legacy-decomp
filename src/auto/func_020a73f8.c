/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a0acc(s32, s32);                        /* extern */

s32 func_020a73f8(void *arg0, void *arg1) {
    if ((arg0 == arg1) || (func_020a0acc(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg1, s32 *, 4)) == 0)) {
        return 1;
    }
    return 0;
}
