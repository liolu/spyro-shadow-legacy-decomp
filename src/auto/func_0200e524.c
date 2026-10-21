/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02009394();                                /* extern */
s32 func_02014384(M2C_UNK *);                       /* extern */
s32 func_0204a80c(s32);                             /* extern */
M2C_UNK func_0205f4b0(s32, u8);                     /* extern */
extern M2C_UNK data_020deebc;

s32 func_0200e524(void *arg0) {
    s32 temp_r0;
    s32 var_r4;
    u32 temp_r1;

    var_r4  = 0;
    temp_r0 = func_0204a80c(M2C_FIELD(arg0, u8 *, 4) + 1);
    temp_r1 = M2C_FIELD(arg0, u8 *, 4) + 1;
    switch (temp_r1) {
        default:
            break;
        case 9:
            if (temp_r0 < 1) {
                var_r4 = 1;
            }
            break;
        case 1:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 10:
            if (temp_r0 < 3) {
                var_r4 = 1;
            }
            break;
        case 2:
        case 3:
            if (temp_r0 < 4) {
                var_r4 = 1;
            }
            break;
    }
    if ((func_02014384(&data_020deebc) != 0) && (var_r4 != 0)) {
        func_0205f4b0(func_02009394(), M2C_FIELD(arg0, u8 *, 5));
    } else {
        func_0205f4b0(func_02009394(), M2C_FIELD(arg0, u8 *, 6));
    }
    return 1;
}
