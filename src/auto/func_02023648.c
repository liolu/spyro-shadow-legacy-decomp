/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02023d60(u8, M2C_UNK);                 /* extern */
extern M2C_UNK data_020e2614;
extern void *data_020e2ba4;

void func_02023648(void) {
    s32 var_r4;
    void *var_r7;

    var_r4 = M2C_FIELD(&data_020e2614, u8 *, 0x10) - 1;
    if (var_r4 < 0) {
        return;
    }
    var_r7 = (M2C_UNK *) ((s8 *) &data_020e2614 + var_r4);
    do {
        if (M2C_FIELD(data_020e2ba4, u8 *, 0x3B) == M2C_FIELD(var_r7, u8 *, 0x55C)) {
            func_02023d60((u8) var_r4, 0);
        }
        var_r7 -= 1;
        var_r4 -= 1;
    } while (var_r4 >= 0);
}
