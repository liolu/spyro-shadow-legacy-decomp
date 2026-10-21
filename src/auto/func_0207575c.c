/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020757d4(void *, M2C_UNK);             /* extern */

void func_0207575c(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 == 0) {
        var_r1 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x50) = var_r1;
    if (arg2 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
    func_020757d4(arg0, 0);
}
