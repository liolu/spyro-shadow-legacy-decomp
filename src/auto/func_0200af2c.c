/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020da1ec;
extern M2C_UNK data_020da1f0;
extern s32 data_020df0fc;

void func_0200af2c(s32 arg0) {
    s32 temp_ip;

    temp_ip                                          = data_020df0fc * 0x1B8;
    *((M2C_UNK *) ((s8 *) &data_020da1f0 + temp_ip)) = *((M2C_UNK *) ((s8 *) &data_020da1f0 + temp_ip)) | arg0;
    *((M2C_UNK *) ((s8 *) &data_020da1ec + temp_ip)) = *((M2C_UNK *) ((s8 *) &data_020da1ec + temp_ip)) | 1;
}
