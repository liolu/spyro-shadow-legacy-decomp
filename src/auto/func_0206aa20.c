#include "m2c.h"

void func_0206aa20(void **arg0, s32 arg1) {
    s32 temp_r2_2;
    void *temp_r1;
    void *temp_r2;
    void *temp_r3;

    M2C_FIELD(*arg0, s32 *, 0x18)   = arg1;
    temp_r2                         = *arg0;
    M2C_FIELD(temp_r2, s32 *, 0x1C) = (s32) M2C_FIELD(temp_r2, s32 *, 0x14);
    temp_r3                         = *arg0;
    temp_r2_2                       = M2C_FIELD(temp_r3, s32 *, 0x18);
    if (temp_r2_2 == 0) {
        return;
    }
    if (M2C_FIELD(temp_r3, s32 *, 0x14) == temp_r2_2) {
        M2C_FIELD(temp_r3, s32 *, 0x1C) = 0;
    }
    temp_r1                         = *arg0;
    M2C_FIELD(temp_r1, s32 *, 0x14) = (s32) M2C_FIELD(temp_r1, s32 *, 0x18);
}
