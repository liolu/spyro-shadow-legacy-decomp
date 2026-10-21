/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020436f0(s32);                           /* extern */
s32 func_02043700();                                /* extern */
extern s32 data_020bf6a0;

void func_02013d20(s32 arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 > func_02043700()) {
        var_r4 = func_02043700();
    } else if (var_r4 < 0) {
        var_r4 = 0;
    }
    M2C_FIELD(func_020436f0(data_020bf6a0), s16 *, 6) = (s16) var_r4;
}
