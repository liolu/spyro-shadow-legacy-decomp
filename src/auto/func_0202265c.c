/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020208c8();                            /* extern */
M2C_UNK func_020211e8(s32);                         /* extern */
extern M2C_UNK data_020e2614;

void func_0202265c(s8 arg0) {
    s32 var_r4;

    var_r4                                 = 0xF;
    M2C_FIELD(&data_020e2614, s8 *, 0x58D) = arg0;
    do {
        func_020211e8(var_r4);
        func_020208c8();
        var_r4 -= 1;
    } while (var_r4 >= 0);
}
