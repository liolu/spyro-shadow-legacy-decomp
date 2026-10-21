#include "m2c.h"

extern M2C_UNK data_020c0910;
extern s32 data_020f53ac;

void func_02054804(M2C_UNK **arg0, s32 arg1) {
    *arg0         = &data_020c0910;
    data_020f53ac = arg1;
}
