/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200a1bc(u32);                         /* extern */
extern M2C_UNK data_020da1ec;
extern M2C_UNK data_020da1f0;
extern s32 data_020df0fc;

void func_0200a250(void) {
    s32 temp_ip;
    u32 var_r4;

    var_r4 = 0;
    do {
        func_0200a1bc(var_r4);
        var_r4 += 1;
    } while (var_r4 < 4U);
    temp_ip                                          = data_020df0fc * 0x1B8;
    *((M2C_UNK *) ((s8 *) &data_020da1f0 + temp_ip)) = *((M2C_UNK *) ((s8 *) &data_020da1f0 + temp_ip)) & 0xFFFF00F8;
    *((M2C_UNK *) ((s8 *) &data_020da1ec + temp_ip)) = 1;
}
