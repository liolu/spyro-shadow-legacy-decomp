/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200a250();                            /* extern */
M2C_UNK func_020904e8(M2C_UNK);                     /* extern */
extern M2C_UNK data_020da1ec;
extern M2C_UNK data_020da1f0;
extern s32 data_020df0fc;

void func_0200afb0(s32 arg0, s32 arg1) {
    s32 *temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r3;

    func_0200a250();
    temp_r3                                          = data_020df0fc * 0x1B8;
    *((M2C_UNK *) ((s8 *) &data_020da1f0 + temp_r3)) = arg0 | 0x10010;
    temp_r2                                          = (M2C_UNK *) ((s8 *) &data_020da1f0 + temp_r3);
    if (arg1 & 1) {
        *temp_r2 |= 0x40000000;
        func_020904e8(0x40);
    }
    if (arg1 & 2) {
        temp_r2_2                                          = data_020df0fc * 0x1B8;
        *((M2C_UNK *) ((s8 *) &data_020da1f0 + temp_r2_2)) = *((M2C_UNK *) ((s8 *) &data_020da1f0 + temp_r2_2)) | 8;
    }
    temp_r2_3                                          = data_020df0fc * 0x1B8;
    *((M2C_UNK *) ((s8 *) &data_020da1ec + temp_r2_3)) = *((M2C_UNK *) ((s8 *) &data_020da1ec + temp_r2_3)) | 1;
}
