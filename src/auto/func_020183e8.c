/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004864();                            /* extern */
M2C_UNK func_0200b2fc();                            /* extern */
M2C_UNK func_0201d248();                            /* extern */
extern u32 data_020df0fc;
extern M2C_UNK data_020e1f50;

void func_020183e8(void) {
    u32 temp_r7;
    u32 var_r6;

    var_r6  = 0;
    temp_r7 = data_020df0fc;
    do {
        data_020df0fc = var_r6;
        if ((M2C_FIELD(&data_020e1f50, s8 *, 5) != 0) && (var_r6 == 0)) {
            func_0201d248();
        }
        var_r6 += 1;
    } while (var_r6 < 2U);
    data_020df0fc = temp_r7;
    func_02004864();
    func_0200b2fc();
}
