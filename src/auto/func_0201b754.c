#include "m2c.h"

extern M2C_UNK data_020e1e9c;
extern M2C_UNK data_020e1ea4;

void func_0201b754(s32 arg0, s32 arg1, s32 arg2) {
    *((M2C_UNK *) ((s8 *) &data_020e1ea4 + (arg0 << 5))) = arg1;
    *((M2C_UNK *) ((s8 *) &data_020e1e9c + (arg0 << 5))) = arg2;
}
