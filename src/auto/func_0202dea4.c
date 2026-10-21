#include "m2c.h"

extern s32 data_020bdea4;
extern s32 data_020bdeac;
extern s32 data_020bdec4;

void func_0202dea4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) data_020bdea4;
    M2C_FIELD(arg0, s32 *, 4) = (s32) data_020bdec4;
    M2C_FIELD(arg0, s32 *, 8) = (s32) data_020bdeac;
}
