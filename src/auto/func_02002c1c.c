#include "m2c.h"

s32 func_02002c1c(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r2;

    temp_r2 = arg1 - arg2;
    if ((temp_r2 >= 0) && (temp_r2 <= 0x80000)) {
        temp_r0 = arg1 - M2C_FIELD(arg0, s32 *, 0x6C);
        if ((temp_r0 > 0) && (temp_r0 <= 0x80000)) {
            return 1;
        }
    }
    return 0;
}
