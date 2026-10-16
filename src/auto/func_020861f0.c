/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02086234(s32);                         /* extern */
extern M2C_UNK data_020f7038;
extern M2C_UNK data_020f7168;

M2C_UNK *func_020861f0(void) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(&data_020f7038, s32 *, 0xFC) & 0x80;
    if (temp_r0 == 0) {
        func_02086234(temp_r0);
        M2C_FIELD(&data_020f7038, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_020f7038, s32 *, 0xFC) | 0x80);
    }
    return &data_020f7168;
}
