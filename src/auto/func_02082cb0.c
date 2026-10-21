/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02094e3c(M2C_UNK, M2C_UNK);

s32 func_02082cb0(s32 arg0) {
    func_02094e3c(arg0 + 0x18, arg0 + 0x20C);
    M2C_FIELD(arg0, s32 *, 0x23C) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x240) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x244) = (s32) M2C_FIELD(arg0, s32 *, 8);
    return arg0 + 0x20C;
}
