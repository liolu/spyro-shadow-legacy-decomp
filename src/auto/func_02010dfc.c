/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010c54();                            /* extern */
s32 func_02011d88();                                /* extern */
extern M2C_UNK data_020daac0;

void func_02010dfc(void) {
    s32 temp_r2;

    if (func_02011d88() != 0) {
        return;
    }
    temp_r2                               = M2C_FIELD(&data_020daac0, s32 *, 8) + M2C_FIELD(&data_020daac0, s32 *, 0x10);
    M2C_FIELD(&data_020daac0, s32 *, 0xC) = (s32) M2C_FIELD(&data_020daac0, s32 *, 0x10);
    M2C_FIELD(&data_020daac0, s32 *, 8)   = temp_r2;
    if (M2C_FIELD((M2C_FIELD(&data_020daac0, s32 *, 0x2C) + temp_r2), u8 *, -1) == 0x2F) {
        M2C_FIELD(&data_020daac0, s32 *, 8)   = (s32) (temp_r2 + 1);
        M2C_FIELD(&data_020daac0, s32 *, 0xC) = (s32) (M2C_FIELD(&data_020daac0, s32 *, 0x10) + 1);
    }
    func_02010c54();
}
