/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02080268();                                /* extern */

s8 func_02080230(void) {
    s8 var_r0;

    if (func_02080268() == -1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
