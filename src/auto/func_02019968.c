/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020b567c;

s32 func_02019968(s32 arg0) {
    s32 temp_r1;
    s32 var_r0;

    var_r0  = arg0;
    temp_r1 = var_r0 >> 6;
    if ((u8) temp_r1 & 1) {
        var_r0 = (s32) (u8) (0x80 - var_r0);
    }
    if ((u8) temp_r1 & 2) {
        return 0 - *((M2C_UNK *) ((s8 *) &data_020b567c + ((var_r0 - 0x80) * 4)));
    }
    return *((M2C_UNK *) ((s8 *) &data_020b567c + (var_r0 * 4)));
}
