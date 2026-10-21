/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200bd20(s32, s32, M2C_UNK);           /* extern */

void func_02002228(void *arg0, void *arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg1, s32 *, 8);
    if (temp_r0 == -1) {
        return;
    }
    func_0200bd20(temp_r0, ((u32) (M2C_FIELD(arg0, s32 *, 0xAC) << 0x10) >> 0x1C) * 0x10, 0x10);
}
