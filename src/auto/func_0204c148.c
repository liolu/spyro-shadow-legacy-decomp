/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020513d0(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02051464(void *, s32, M2C_UNK);        /* extern */

void func_0204c148(s32 arg0, void *arg1) {
    s8 var_r0;

    if (M2C_FIELD(arg1, s32 *, 0x1C) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_020513d0(arg1, arg0 + 0x196, 1);
        return;
    }
    func_02051464(arg1, arg0 + 0x196, 1);
}
