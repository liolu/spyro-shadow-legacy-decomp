/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK VBlankIntrWait();                           /* extern */
M2C_UNK func_0201817c(s32);                         /* extern */
M2C_UNK func_02019bf8();                            /* extern */
extern void *data_020df0b4;
extern u32 data_020df0f8;
extern s32 data_020df0fc;

void func_0201818c(void) {
    s32 temp_r2;
    s32 temp_r4;

    temp_r4 = data_020df0fc;
    func_02019bf8();
    do {
        VBlankIntrWait();
        temp_r2 = M2C_FIELD(data_020df0b4, s32 *, 0x1C);
    } while ((u32) (temp_r2 - M2C_FIELD(data_020df0b4, s32 *, 0x20)) < (u32) data_020df0f8);
    M2C_FIELD(data_020df0b4, s32 *, 0x20) = temp_r2;
    func_0201817c(temp_r4);
}
