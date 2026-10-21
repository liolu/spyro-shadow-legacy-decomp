#include "m2c.h"

extern s8 data_020ebcdc;
extern s8 data_020ebce0;

void func_02049e48(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 8) == 0x9D) && (data_020ebce0 != 0)) {
        data_020ebce0 = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 8) != 0x9E) {
        return;
    }
    if (data_020ebcdc != 0) {
        data_020ebcdc = 0;
    }
}
