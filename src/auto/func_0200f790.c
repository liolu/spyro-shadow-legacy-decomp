/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200917c(s8, u8);                          /* extern */
M2C_UNK func_0201f524();                            /* extern */

s32 func_0200f790(void *arg0) {
    if (func_0200917c(M2C_FIELD(arg0, s8 *, 4), M2C_FIELD(arg0, u8 *, 5)) != 0) {
        func_0201f524();
    }
    return 1;
}
