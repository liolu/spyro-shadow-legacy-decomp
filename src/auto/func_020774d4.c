#include "m2c.h"

s32 func_020774d4(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x318) > 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x318) = 0x800;
    return 1;
}
