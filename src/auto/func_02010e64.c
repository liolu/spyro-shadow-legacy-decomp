/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020daa80;
extern M2C_UNK data_020daac0;

void func_02010e64(void) {
    M2C_FIELD(&data_020daac0, s32 *, 8)    = (s32) (0 - M2C_FIELD(&data_020daac0, s32 *, 0x10));
    M2C_FIELD(&data_020daac0, s32 *, 0x1C) = (s32) ((data_020daa80 * 8) + 0x84);
    M2C_FIELD(&data_020daac0, s32 *, 0x18) = 0x20;
    M2C_FIELD(&data_020daac0, s32 *, 0x14) = 0x40;
}
