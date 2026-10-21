/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02040230(void **);                     /* extern */

void func_0204e820(void *arg0) {
    void *sp0;
    void *temp_r6;
    void *var_r1;

    var_r1  = M2C_FIELD(arg0, void **, 0xCC);
    temp_r6 = arg0 + 0xC8;
    sp0     = var_r1;
    if (var_r1 == temp_r6) {
        return;
    }
    do {
        M2C_FIELD(var_r1, s8 *, 0x10) = 0;
        func_02040230(&sp0);
        var_r1 = sp0;
    } while (var_r1 != temp_r6);
}
