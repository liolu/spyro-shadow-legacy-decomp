/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02021c1c(M2C_UNK *, M2C_UNK *, u32);   /* extern */
M2C_UNK func_0209396c(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020e2614;
extern M2C_UNK data_020e2a44;
extern M2C_UNK data_020e2a70;
extern M2C_UNK data_020e2aa0;

void func_02022270(void) {
    u32 var_r4;

    var_r4 = (u32) M2C_FIELD(&data_020e2614, u32 *, 0x4C0) >> 1;
    if (M2C_FIELD(&data_020e2614, s32 *, 0x42C) & 4) {
        var_r4 = var_r4 >> 1;
    }
    func_02021c1c(&data_020e2a44, &data_020e2a70, var_r4);
    func_02021c1c(&data_020e2a44, &data_020e2aa0, var_r4);
    func_0209396c(M2C_FIELD(&data_020e2614, s32 *, 0x4BC), 0x2000);
}
