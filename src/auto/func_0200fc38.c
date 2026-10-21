/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void **func_0200917c(s8, u8);                       /* extern */
extern s8 data_020da9c4;

s8 func_0200fc38(void *arg0) {
    s8 var_r0;
    s8 var_r1;
    void **temp_r0;

    temp_r0 = func_0200917c(M2C_FIELD(arg0, s8 *, 4), M2C_FIELD(arg0, u8 *, 5));
    if (data_020da9c4 == 0) {
        if (temp_r0 != NULL) {
            data_020da9c4 = 1;
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x34)(temp_r0);
        }
    } else {
        if (temp_r0 != NULL) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        data_020da9c4 = var_r1;
    }
    if (data_020da9c4 == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
