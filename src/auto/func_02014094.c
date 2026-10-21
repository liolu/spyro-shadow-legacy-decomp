/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02043708();                                /* extern */
s32 func_02043748();                                /* extern */

s32 func_02014094(void *arg0) {
    s32 var_r4;

    var_r4 = M2C_FIELD(arg0, u8 *, 0x56) + func_02043748();
    if (var_r4 > func_02043708()) {
        var_r4 = func_02043708();
    }
    return var_r4;
}
