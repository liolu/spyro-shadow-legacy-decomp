#include "m2c.h"

extern M2C_UNK data_020dec0c;
extern s32 data_020df0fc;

s32 func_020138f8(void) {
    return *((M2C_UNK *) ((s8 *) &data_020dec0c + (data_020df0fc * 0x3C)));
}
