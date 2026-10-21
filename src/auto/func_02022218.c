/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02022090();                            /* extern */
M2C_UNK func_02094efc(void *, void *, M2C_UNK);     /* extern */
extern M2C_UNK data_020bddfc;

void func_02022218(u8 *arg0) {
    u8 temp_r3;

    temp_r3 = *arg0;
    if ((u32) temp_r3 < 2U) {
        func_02094efc((M2C_UNK *) ((s8 *) &data_020bddfc + (temp_r3 << 5)), arg0 + 0xC, 0x20);
        return;
    }
    if ((u32) temp_r3 >= 7U) {
        return;
    }
    func_02022090();
}
