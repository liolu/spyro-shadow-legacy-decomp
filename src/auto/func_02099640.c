/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0209967c(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
M2C_UNK func_02099a2c();                            /* extern */
extern M2C_UNK func_02099a24;

s32 func_02099640(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0209967c(arg0, arg1, &func_02099a24, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02099a2c();
    return sp0;
}
