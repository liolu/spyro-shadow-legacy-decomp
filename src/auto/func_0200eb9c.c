/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020091c0(s8);                          /* extern */
s32 func_02009394();                                /* extern */
M2C_UNK func_020186ec();                            /* extern */
M2C_UNK func_020186fc();                            /* extern */
M2C_UNK func_0205f4b0(s32, u8);                     /* extern */

s32 func_0200eb9c(void *arg0) {
    func_0205f4b0(func_02009394(), M2C_FIELD(arg0, u8 *, 5));
    func_020091c0(M2C_FIELD(arg0, s8 *, 4));
    func_020186ec();
    func_020186fc();
    return 1;
}
