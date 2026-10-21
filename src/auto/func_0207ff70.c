/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02084a14(s32, M2C_UNK);                /* extern */
M2C_UNK func_02084a64(s32, s32, M2C_UNK);           /* extern */
extern s32 (*data_020f6eac)();
extern s32 data_020f6eb0;

void func_0207ff70(s32 arg0) {
    s32 temp_r4;

    temp_r4 = (arg0 + 0x1F) & ~0x1F;
    func_02084a14(data_020f6eb0, 0);
    if ((data_020f6eac == NULL) || (data_020f6eac() != 0)) {
        func_02084a64(data_020f6eb0, temp_r4, 0x20);
        return;
    }
    func_02084a64(data_020f6eb0, temp_r4, -0x20);
}
