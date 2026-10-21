#include "m2c.h"

void func_02055094(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s8 *, 0xCC)  = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = arg1;
    M2C_FIELD(arg0, s32 *, 0xA4) = arg2;
    M2C_FIELD(arg0, s32 *, 0xA8) = arg3;
}
