#include "m2c.h"

extern M2C_UNK data_020c0498;
extern s32 data_020ebd2c;

void func_02050d60(M2C_UNK **arg0, s32 arg1) {
    *arg0         = &data_020c0498;
    data_020ebd2c = arg1;
}
