#include "m2c.h"

extern M2C_UNK data_020c2e40;
extern s32 data_020f6f30;

void func_02081f04(M2C_UNK **arg0, s32 arg1) {
    *arg0         = &data_020c2e40;
    data_020f6f30 = arg1;
}
