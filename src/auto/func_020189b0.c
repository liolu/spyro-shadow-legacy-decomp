/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020062d0();                            /* extern */
s32 func_0200fcc0();                                /* extern */
M2C_UNK func_02018a18();                            /* extern */
s32 func_02040f48();                                /* extern */
M2C_UNK func_02040f84(s32, s32);                    /* extern */
s32 func_020822c0();                                /* extern */
extern s8 data_020df17c;

void func_020189b0(void) {
    s32 temp_r4;
    s8 var_r0;

    func_02018a18();
    temp_r4 = func_0200fcc0();
    func_020062d0();
    func_02040f84(temp_r4, func_020822c0());
    func_0200fcc0();
    if (func_02040f48() != -1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        data_020df17c = 0;
        return;
    }
    data_020df17c = 1;
}
