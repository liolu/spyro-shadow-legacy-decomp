#include "m2c.h"

void func_02048a04(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3                   = (arg2 * 0x14) + arg1;
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(temp_r3, s32 *, 0x324);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(temp_r3, s32 *, 0x328);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(temp_r3, s32 *, 0x32C);
}
