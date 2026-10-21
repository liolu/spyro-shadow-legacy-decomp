/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020091c0(s8);                          /* extern */
s32 func_02009394();                                /* extern */
s32 func_02011bc8();                                /* extern */
M2C_UNK func_0205f4b0(s32, u8);                     /* extern */
extern u8 data_020da9a8;
extern s8 data_020da9dc;
extern u8 data_020da9f0;

s8 func_0200e0ec(void *arg0) {
    s8 var_r0;

    if (data_020da9dc == 0) {
        if (func_02011bc8() != 0) {
            data_020da9a8 = M2C_FIELD(arg0, u8 *, 5);
            data_020da9f0 = M2C_FIELD(arg0, u8 *, 4);
            data_020da9dc = 1;
        }
    } else if (func_02011bc8() == 0) {
        func_0205f4b0(func_02009394(), data_020da9a8);
        func_020091c0((s8) data_020da9f0);
        data_020da9a8 = 0;
        data_020da9f0 = 0;
        data_020da9dc = 0;
    }
    if (data_020da9dc == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
