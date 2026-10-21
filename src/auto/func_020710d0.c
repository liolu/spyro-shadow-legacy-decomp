#include "engine.h"
#include "m2c.h"

void func_02064b94(M2C_UNK, M2C_UNK);

void func_020710d0(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    func_02064b94(arg0, arg1);
}
