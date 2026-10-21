#include "m2c.h"

M2C_UNK func_02071ecc(void *, s32, M2C_UNK);        /* extern */

void func_02071e94(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s8 *, 0x75) = 1;
    func_02071ecc(arg0, arg0 + 0x48, arg1);
}
