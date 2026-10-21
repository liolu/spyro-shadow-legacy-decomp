/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02011f44();                                /* extern */
M2C_UNK func_02019b08(s32, M2C_UNK);                /* extern */
M2C_UNK func_0201b770(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02081d34(s32, M2C_UNK);                    /* extern */
extern s8 data_020e3a80;
extern u32 data_020e3a84;
extern s32 data_020e6058;

void func_020355d0(void) {
    s32 var_r1;
    u32 temp_r1;
    u32 var_r4;

    var_r1 = 1;
    if ((data_020e6058 != 0xE) && (data_020e6058 != 0xF)) {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        var_r4 = 0x3C;
    } else {
        var_r4 = 0xF;
    }
    if (func_02081d34(func_02011f44(), 0xC) != 0) {
        data_020e3a80 = 1;
        return;
    }
    temp_r1       = data_020e3a84 + 1;
    data_020e3a84 = temp_r1;
    if ((temp_r1 <= var_r4) && (data_020e3a80 == 0)) {
        return;
    }
    func_0201b770(1, 0x3F, 1);
    func_02019b08(data_020e6058, 1);
}
