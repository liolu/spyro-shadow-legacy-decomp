/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s8 func_02042e28();                                 /* extern */
s8 func_02042e98();                                 /* extern */
extern M2C_UNK data_020ebbc8;

s8 func_02042dcc(s32 arg0) {
    s8 temp_r0;
    s8 var_r0;

    if (arg0 != 0) {
        return func_02042e98();
    }
    if (M2C_FIELD(&data_020ebbc8, s32 *, 0x1C) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    temp_r0 = var_r0;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    return func_02042e28();
}
