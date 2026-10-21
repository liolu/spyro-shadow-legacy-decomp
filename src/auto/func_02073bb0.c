/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02072cc8(void *, M2C_UNK);             /* extern */
M2C_UNK func_020765a8(void *);                      /* extern */

void func_02073bb0(void *arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg0, void **, 0x34) = arg0;
    M2C_FIELD(arg0, s8 *, 0x38)    = 0;
    M2C_FIELD(arg0, s32 *, 0x44)   = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x48)   = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x4C)   = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x50)   = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x3C)   = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x40)   = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x54)   = arg2;
    M2C_FIELD(arg0, s32 *, 0x58)   = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x5C)   = 0;
    func_02072cc8(arg0 + 0x34, 0);
    func_020765a8(arg0);
}
