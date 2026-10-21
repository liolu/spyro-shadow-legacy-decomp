/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020757d4(void *, M2C_UNK);             /* extern */

void func_0207579c(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    if (arg2 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x4C);
    func_020757d4(arg0, 0);
}
