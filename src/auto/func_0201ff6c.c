/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202286c(s32);                         /* extern */
extern M2C_UNK data_020e2308;
extern M2C_UNK data_020e2614;

void func_0201ff6c(void) {
    s32 temp_r0;

    if (!(M2C_FIELD(&data_020e2308, volatile u8 *, 0xB) & 0x80)) {
        return;
    }
    if (M2C_FIELD(&data_020e2308, volatile u8 *, 0xB) & 0x40) {
        temp_r0 = M2C_FIELD(&data_020e2614, volatile s32 *, 0xC) & 8;
        if (temp_r0 == 0) {
            func_0202286c(temp_r0);
        }
    }
    M2C_FIELD(&data_020e2308, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_020e2308, volatile u8 *, 0xB) & ~0x80);
}
