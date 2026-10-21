#include "m2c.h"

extern M2C_UNK data_020d9f00;
extern s32 data_020df0fc;

s32 func_020061a0(void) {
    return (data_020df0fc * 0xC) + (s32) &data_020d9f00;
}
