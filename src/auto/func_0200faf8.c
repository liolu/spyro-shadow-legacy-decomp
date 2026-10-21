/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020186ec();                                /* extern */
M2C_UNK func_020202f0(u8);                          /* extern */

s32 func_0200faf8(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 4) == 7) && (func_020186ec() != 1)) {
        func_020202f0(M2C_FIELD(arg0, u8 *, 4));
    }
    return 1;
}
