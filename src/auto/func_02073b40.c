/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02072cc8(void *, M2C_UNK);             /* extern */
M2C_UNK func_02076e48(void *);                      /* extern */

void func_02073b40(void *arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg0, void **, 0x58) = arg0;
    M2C_FIELD(arg0, s8 *, 0x5C)    = 0;
    M2C_FIELD(arg0, s32 *, 0x68)   = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x6C)   = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x70)   = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x74)   = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x60)   = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x64)   = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x78)   = arg2;
    M2C_FIELD(arg0, s32 *, 0x7C)   = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x80)   = 0;
    func_02072cc8(arg0 + 0x58, 0);
    func_02076e48(arg0);
}
