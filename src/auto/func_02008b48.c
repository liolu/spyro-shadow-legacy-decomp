/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02051430(M2C_UNK);                         /* extern */
M2C_UNK func_02051464(M2C_UNK, s8 *, M2C_UNK);      /* extern */
extern s8 data_020d9f9c;

void func_02008b48(M2C_UNK arg0) {
    s32 var_r7;
    s8 *var_r6;
    s8 var_r0;

    var_r6 = &data_020d9f9c;
    var_r7 = 0;
    do {
        if (func_02051430(arg0) == 1) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        var_r7 += 1;
        *var_r6 = var_r0;
        var_r6 += 1;
    } while (var_r7 < 0x200);
    func_02051464(arg0, &(&data_020d9f9c)[var_r7], 0x30);
}
