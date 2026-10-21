#include "m2c.h"

M2C_UNK func_02097320(void *, M2C_UNK);             /* extern */

void func_020978b4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    func_02097320(arg0, 3);
}
