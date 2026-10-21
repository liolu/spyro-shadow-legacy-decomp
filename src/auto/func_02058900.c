/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02057464(M2C_UNK, M2C_UNK);

void func_02058900(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 4)    = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 8)    = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg0, s8 *, 0x8C)  = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg3, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg3, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg3, s32 *, 8);
    M2C_FIELD(arg0, s8 *, 0x8C)  = 1;
    func_02057464(arg0, arg1);
}
