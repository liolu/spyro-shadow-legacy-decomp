/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205ef8c();                            /* extern */
M2C_UNK func_0208ea6c();                         /* extern */

void *func_020512c8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0205ef8c();
    M2C_FIELD(arg0, s8 *, 0xF4) = 1;
    func_0208ea6c(arg0 + 0x8C);
    M2C_FIELD(arg0, s32 *, 0xF0) = arg2;
    M2C_FIELD(arg0, s32 *, 0xF8) = arg3;
    return arg0;
}
