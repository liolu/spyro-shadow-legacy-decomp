#include "engine.h"
#include "m2c.h"

void func_02040f6c(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
}
