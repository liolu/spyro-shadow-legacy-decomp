/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201ff6c();                                /* extern */
M2C_UNK func_0201ffd0();                            /* extern */
M2C_UNK func_02027ec4(M2C_UNK);                     /* extern */
extern M2C_UNK data_020e2308;

s32 func_02020144(void) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(&data_020e2308, u8 *, 0xB) & 0x20;
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0201ffd0();
    func_02027ec4(1);
    M2C_FIELD(&data_020e2308, u8 *, 0xB) = (u8) (M2C_FIELD(&data_020e2308, u8 *, 0xB) & ~1);
    return func_0201ff6c();
}
