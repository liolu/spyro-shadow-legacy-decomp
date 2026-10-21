/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02063598(void *arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xAC)   = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0xB0)   = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xB4)   = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s8 *, 0x134)   = 1;
    M2C_FIELD(arg0, void **, 0xA4) = (void *) (arg0 + 0xA8);
    M2C_FIELD(arg0, s32 *, 0x184)  = arg2;
    M2C_FIELD(arg0, s8 *, 0x191)   = 1;
}
