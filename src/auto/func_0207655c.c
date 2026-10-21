/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02007f68(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_0200809c(s32);                         /* extern */

void func_0207655c(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 == 0x1000) && (arg2 == 0x1000)) {
        func_0200809c(M2C_FIELD(arg0, s32 *, 0x18));
        return;
    }
    func_02007f68(M2C_FIELD(arg0, s32 *, 0x18), arg1 * 0x10, arg2 * 0x10, 0);
}
