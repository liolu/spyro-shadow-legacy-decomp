/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020c0e94;

void func_0205b7c8(void *arg0, void *arg1, void *arg2, void *arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c0e94;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 8)      = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xC)    = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x10)   = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14)   = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18)   = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x1C)   = (s32) M2C_FIELD(arg3, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x20)   = (s32) M2C_FIELD(arg3, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x24)   = (s32) M2C_FIELD(arg3, s32 *, 8);
    M2C_FIELD(arg0, s8 *, 0x8C)    = 1;
}
