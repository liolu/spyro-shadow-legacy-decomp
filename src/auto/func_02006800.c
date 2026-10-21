#include "m2c.h"

extern M2C_UNK data_020c0cb0;

void func_02006800(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c0cb0;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8)      = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC)    = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}
