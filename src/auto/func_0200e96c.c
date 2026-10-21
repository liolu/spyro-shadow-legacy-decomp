/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200fcc0();                                /* extern */
s32 func_02040f48();                                /* extern */
M2C_UNK func_02041340(s32, u16);                    /* extern */
extern s8 data_020da9d0;

s8 func_0200e96c(void *arg0) {
    s8 var_r0;
    s8 var_r0_2;

    if (data_020da9d0 == 0) {
        func_02041340(func_0200fcc0(), M2C_FIELD(arg0, u16 *, 4));
        data_020da9d0 = 1;
    } else {
        func_0200fcc0();
        if (func_02040f48() != -1) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 == 0) {
            data_020da9d0 = 0;
        }
    }
    if (data_020da9d0 == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
