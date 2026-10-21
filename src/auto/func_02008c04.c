/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008c40(void *, M2C_UNK, s8);         /* extern */

void func_02008c04(void *arg0, M2C_UNK arg1) {
    s8 temp_r2;
    s8 var_r2;

    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    temp_r2 = var_r2;
    if (temp_r2 == 0) {
        return;
    }
    func_02008c40(arg0, arg1, temp_r2);
}
