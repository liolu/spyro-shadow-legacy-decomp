/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02090da0(u16, M2C_UNK, s32, M2C_UNK, s32); /* extern */

void func_020813b0(void *arg0, u16 *arg1) {
    u16 temp_r2;

    temp_r2 = *arg1;
    if (temp_r2 == M2C_FIELD(arg0, u16 *, 0x4A0)) {
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x4A0) = temp_r2;
    func_02090da0(M2C_FIELD(arg0, u16 *, 0x4A0), 0, 0x7FFF, 0x3F, 0);
}
