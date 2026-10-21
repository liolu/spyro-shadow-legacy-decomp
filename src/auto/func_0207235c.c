/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02011bc8();                                /* extern */
void *func_02034350();                              /* extern */
M2C_UNK func_02074648(void *, u8, M2C_UNK, M2C_UNK); /* extern */

void func_0207235c(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s8 *, 0x20) != 1) {
        return;
    }
    if (func_02011bc8() != 0) {
        return;
    }
    func_02074648(arg0 + 0x580, M2C_FIELD(func_02034350(), u8 *, 0x12B), 0x2000, arg1);
}
