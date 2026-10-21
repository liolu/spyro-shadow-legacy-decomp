/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201ff6c();                            /* extern */
M2C_UNK func_0201ffd0();                            /* extern */
s32 func_020211e8(s32);                             /* extern */
M2C_UNK func_02021890(s32, M2C_UNK);                /* extern */

void func_02020108(void) {
    s32 var_r5;

    func_0201ffd0();
    var_r5 = 0xF;
    do {
        func_02021890(func_020211e8(var_r5), 1);
        var_r5 -= 1;
    } while (var_r5 >= 0);
    func_0201ff6c();
}
