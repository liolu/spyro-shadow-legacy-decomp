/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020136c0(s32, s32, s32, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_020daac0;
extern M2C_UNK data_020daaec;

void func_02010bac(void) {
    func_020136c0(M2C_FIELD(&data_020daac0, s32 *, 0x14), (M2C_FIELD(&data_020daac0, u8 *, 0x34) * 0x38) + 0x48,
                  M2C_FIELD(&data_020daac0, s32 *, 0x1C), 0xA9, M2C_FIELD(&data_020daac0, s32 *, 0x18), &data_020daaec,
                  (s32) M2C_FIELD(&data_020daac0, u8 *, 0x34));
    M2C_FIELD(&data_020daac0, s32 *, 0x30) = (s32) M2C_FIELD(&data_020daac0, s32 *, 0x2C);
}
