#include "m2c.h"

extern s32 data_020df0fc;
extern M2C_UNK data_020e2058;
extern M2C_UNK data_020e205c;

void func_0201c45c(void *arg0) {
    s32 temp_ip;

    temp_ip                                          = data_020df0fc * 0x130;
    *((M2C_UNK *) ((s8 *) &data_020e2058 + temp_ip)) = M2C_FIELD(arg0, s32 *, 0);
    *((M2C_UNK *) ((s8 *) &data_020e205c + temp_ip)) = M2C_FIELD(arg0, s32 *, 4);
}
