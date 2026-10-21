/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02073db0(void *arg0, void *arg1, void *arg2, s32 arg3) {
    M2C_FIELD(arg0, void **, 0)  = arg1;
    M2C_FIELD(arg0, s8 *, 4)     = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 8)    = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x20) = arg3;
    M2C_FIELD(arg0, s32 *, 0x24) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}
