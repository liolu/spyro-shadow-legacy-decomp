/* compiler: 1.2/b56  */
#include "m2c.h"

M2C_UNK func_02053440(s32);                         /* extern */

void func_02007708(void *arg0) {
    u32 temp_r2;
    void *temp_r1;

    temp_r2 = (u32) (M2C_FIELD(arg0, s32 *, 4) << 0x1C) >> 0x1F;
    if ((temp_r2 != 0) && ((s8) ((u32) (M2C_FIELD(arg0, s32 *, 0x38) << 0x12) >> 0x1F) != 0)) {
        func_02053440(M2C_FIELD(arg0, s32 *, 0x44));
        return;
    }
    if (temp_r2 == 0) {
        return;
    }
    if ((s8) ((u32) (M2C_FIELD(arg0, s32 *, 0x38) << 0xE) >> 0x1F) == 0) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r1 == NULL) {
        return;
    }
    if ((s8) ((u32) (M2C_FIELD(temp_r1, s32 *, 0x38) << 0x12) >> 0x1F) == 0) {
        return;
    }
    func_02053440(M2C_FIELD(arg0, s32 *, 0x44));
}
