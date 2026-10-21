/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02043700();                                /* extern */
s32 func_02043710();                                /* extern */

s32 func_02013e90(void *arg0) {
    s32 var_r4;

    var_r4 = M2C_FIELD(arg0, u8 *, 0x58) + func_02043710();
    if (var_r4 > func_02043700()) {
        var_r4 = func_02043700();
    }
    return var_r4;
}
