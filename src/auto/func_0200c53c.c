/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200917c(s8, u8);                          /* extern */
M2C_UNK func_0201237c(s32, s8);                     /* extern */

s32 func_0200c53c(void *arg0) {
    s32 temp_r0;
    s8 var_r1;

    temp_r0 = func_0200917c(M2C_FIELD(arg0, s8 *, 4), M2C_FIELD(arg0, u8 *, 5));
    if (temp_r0 != 0) {
        if (M2C_FIELD(arg0, u8 *, 6) != 0) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        func_0201237c(temp_r0, var_r1);
    }
    return 1;
}
