#include "m2c.h"

extern M2C_UNK data_020bf4e0;

void func_02041340(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) * ((M2C_UNK *) ((s8 *) &data_020bf4e0 + (arg1 * 4)));
}
