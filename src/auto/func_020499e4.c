/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020062a0();                                /* extern */
M2C_UNK func_02049b78(s32, void *);                 /* extern */

void func_020499e4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = -1;
    M2C_FIELD(arg0, s32 *, 8)   = -1;
    func_02049b78(func_020062a0() + 4, arg0);
}
