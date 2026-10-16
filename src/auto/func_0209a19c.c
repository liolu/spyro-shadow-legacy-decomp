/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02099a94();                            /* extern */
s32 func_0209a1e0(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_020fcf40;
extern M2C_UNK func_02099aac;

s32 func_0209a19c(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_0209a1e0(arg0, &func_02099aac, 0);
    M2C_FIELD(&data_020fcf40, s32 *, 0x20) = temp_r0;
    if (temp_r0 == 0) {
        func_02099a94();
    }
    return M2C_FIELD(&data_020fcf40, s32 *, 0x20);
}
