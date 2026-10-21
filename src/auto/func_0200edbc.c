/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s8 data_020da1cc;

s32 func_0200edbc(void) {
    s32 var_r2;
    s8 *var_r1;

    var_r1 = &data_020da1cc;
    var_r2 = 0x230;
    do {
        var_r2 += 1;
        *var_r1 = 0;
        var_r1 += 1;
    } while (var_r2 < 0x240);
    return 1;
}
