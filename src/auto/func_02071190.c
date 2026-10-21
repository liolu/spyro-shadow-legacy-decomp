/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020c3b04;
extern s32 data_020c3b48;

s32 func_02071190(s32 arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r3;

    var_r0 = M2C_FIELD(((arg1 * 0x24) + data_020c3b04), s32 *, 8);
    var_r3 = (var_r0 * 0x14) + data_020c3b48;
loop_1:
    if (M2C_FIELD(var_r3, s32 *, 0x10) != 0) {
        return var_r0;
    }
    var_r3 += 0x14;
    var_r0 += 1;
    if (arg1 != *(M2C_UNK *) var_r3) {
        return 0;
    }
    goto loop_1;
}
