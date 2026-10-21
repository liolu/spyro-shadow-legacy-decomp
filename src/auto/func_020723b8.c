/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02011bc8();                                /* extern */
void *func_02034350();                              /* extern */
M2C_UNK func_02074320(void *, u16, M2C_UNK, M2C_UNK); /* extern */

void func_020723b8(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s8 *, 0x20) != 1) {
        return;
    }
    if (func_02011bc8() != 0) {
        return;
    }
    func_02074320(arg0 + 0x37C, M2C_FIELD(func_02034350(), u16 *, 0x11C), 0x2000, arg1);
}
