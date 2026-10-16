#include "engine.h"
#include "m2c.h"

void func_02070818(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x94) = arg1;
}
