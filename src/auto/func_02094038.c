#include "m2c.h"

extern u16 data_020fb1d8;

void func_02094038(s32 arg0) {
    data_020fb1d8 |= 1 << arg0;
}
