#include "m2c.h"

void func_0201fea0(void *arg0, void *arg1) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r2;
    s32 temp_r2_2;

    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    temp_r1                   = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_r2                   = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r2 < temp_r1) {
        M2C_FIELD(arg0, s32 *, 0) = temp_r1;
    } else {
        temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x24);
        if (temp_r2 > temp_r1_2) {
            M2C_FIELD(arg0, s32 *, 0) = temp_r1_2;
        }
    }
    temp_r1_3 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_r2_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r2_2 < temp_r1_3) {
        M2C_FIELD(arg0, s32 *, 4) = temp_r1_3;
        return;
    }
    temp_r1_4 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r2_2 > temp_r1_4) {
        M2C_FIELD(arg0, s32 *, 4) = temp_r1_4;
    }
}
