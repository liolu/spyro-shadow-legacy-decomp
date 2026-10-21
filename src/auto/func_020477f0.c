/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204ed80(void *, s32, M2C_UNK);        /* extern */

void func_020477f0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x98) == 0xE6) {
        func_0204ed80(arg0 + 0xF4, 0x1BB, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x27C) = 1;
}
