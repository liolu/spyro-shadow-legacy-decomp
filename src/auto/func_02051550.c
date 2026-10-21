/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0207ff48(s16, M2C_UNK *, M2C_UNK);         /* extern */
extern M2C_UNK data_020c04b8;

void func_02051550(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s32 *, 0)    = func_0207ff48(arg1, &data_020c04b8, 0x33);
    M2C_FIELD(arg0, s32 *, 4)    = (s32) (M2C_FIELD(arg0, s32 *, 0) + arg1);
    M2C_FIELD(arg0, s32 *, 8)    = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s8 *, 0xC)   = 0;
    M2C_FIELD(arg0, s16 *, 0xE)  = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    M2C_FIELD(arg0, s8 *, 0x20)  = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x18)  = 1;
}
