#include "m2c.h"

void func_02070fe8(void *arg0, s8 arg1, s8 arg2, u32 arg3, u8 arg4) {
    M2C_FIELD(arg0, s8 *, 0x84) = arg1;
    M2C_FIELD(arg0, s8 *, 0x85) = arg2;
    if ((u32) arg4 > arg3) {
        arg4 = (u8) arg3;
    }
    M2C_FIELD(arg0, s8 *, 0x89) = (s8) arg3;
    M2C_FIELD(arg0, u8 *, 0x8B) = arg4;
}
