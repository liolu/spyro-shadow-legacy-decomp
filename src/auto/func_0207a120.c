/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020504b8();                            /* extern */
M2C_UNK func_02053648(s32, s32, void *, M2C_UNK, s32); /* extern */
M2C_UNK func_02061b4c(void *, M2C_UNK);             /* extern */

void func_0207a120(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    func_020504b8();
    func_02053648(M2C_FIELD(arg0, s32 *, 0x44), arg1, arg0, 0, arg3);
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    M2C_FIELD(arg0, s32 *, 0x108) = 0;
    func_02061b4c(arg0 + 0x234, arg2);
}
