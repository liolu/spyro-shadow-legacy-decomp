/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s8 func_0208036c(void *arg0) {
    s8 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0xC) & 0x10) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
