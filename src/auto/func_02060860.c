/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205f47c(u32);                         /* extern */
M2C_UNK func_02060974(void *);                      /* extern */

void *func_02060860(void *arg0) {
    u32 temp_r5;
    u32 var_r4;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 0x10) * 0x10);
    var_r4  = temp_r5 + (M2C_FIELD(arg0, s32 *, 4) * 0x10);
    if (var_r4 > temp_r5) {
        do {
            var_r4 -= 0x10;
            func_0205f47c(var_r4);
        } while (var_r4 > temp_r5);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_02060974(arg0);
    return arg0;
}
