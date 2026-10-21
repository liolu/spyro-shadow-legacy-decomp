/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02051370(M2C_UNK, s32);                /* extern */
M2C_UNK func_020513d0(M2C_UNK, u8 *, M2C_UNK);      /* extern */
extern u8 data_020d9f9c;

void func_02008ba4(M2C_UNK arg0) {
    s32 var_r1;
    s32 var_r7;
    u8 *var_r6;

    var_r6 = &data_020d9f9c;
    var_r7 = 0;
    do {
        if (*var_r6 != 0) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        func_02051370(arg0, var_r1);
        var_r7 += 1;
        var_r6 += 1;
    } while (var_r7 < 0x200);
    func_020513d0(arg0, &(&data_020d9f9c)[var_r7], 0x30);
}
