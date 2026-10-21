/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203d474(void *);                      /* extern */
M2C_UNK func_02076eac(void *, void *, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void func_0203d410(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
        M2C_FIELD(arg0, s32 *, 0x58) = (s32) M2C_FIELD(arg0, s32 *, 0x5C);
    } else {
        M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
    }
    if (arg2 == 0) {
        return;
    }
    func_0203d474(arg0);
    func_02076eac(arg0, arg0 + 0x68, -1, -1, -1, 1);
}
