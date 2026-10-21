/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209361c();                                /* extern */
s32 func_020956d4();                                /* extern */
M2C_UNK func_0209572c();                            /* extern */
s32 func_020957fc();                                /* extern */
M2C_UNK func_02095a50(M2C_UNK);                     /* extern */
s32 func_02095cd4(M2C_UNK);                         /* extern */

s32 func_02095c38(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_0209361c() != 0) {
        return 0;
    }
    temp_r0_3 = func_020956d4();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (arg0 == 0) {
        return 0;
    }
    if (func_020957fc() > 0) {
        do {

        } while (func_02095cd4(0) != 0);
        temp_r0_2 = func_020956d4();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02095a50(1);
block_12:
    func_0209572c();
    do {
        func_02095cd4(1);
        temp_r0 = func_020956d4();
    } while (temp_r0 == 0);
    return temp_r0;
}
