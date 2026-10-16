#include "m2c.h"

extern s32 data_020f9fcc;

void func_0208d7c0(s32 arg0) {
    data_020f9fcc &= ~(1 << arg0);
}
