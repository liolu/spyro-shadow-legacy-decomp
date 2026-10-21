#include "m2c.h"

s32 func_02002c50(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = arg1 - arg2;
    if ((temp_r0 >= 0) && (temp_r0 <= 0x80000)) {
        return 1;
    }
    return 0;
}
