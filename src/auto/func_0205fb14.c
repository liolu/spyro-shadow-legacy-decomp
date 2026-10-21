#include "m2c.h"

s32 func_0205fb14(void *arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 4);
    return temp_r2 + M2C_FIELD((temp_r2 + (arg1 * 2)), u16 *, 2);
}
