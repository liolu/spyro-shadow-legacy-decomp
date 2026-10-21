#include "m2c.h"

extern M2C_UNK data_020d9ed0;
extern s32 data_020df0fc;

s32 func_02006220(void) {
    return (data_020df0fc * 0xC) + (s32) &data_020d9ed0;
}
