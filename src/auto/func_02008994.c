#include "m2c.h"

extern s32 data_020d9f90;

s32 func_02008994(s32 arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = data_020d9f90 + M2C_FIELD((data_020d9f90 + (arg0 * 2)), u16 *, 2);
    return temp_r2 + M2C_FIELD((temp_r2 + (arg1 * 2)), u16 *, 2) + 8;
}
