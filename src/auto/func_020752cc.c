#include "m2c.h"

void func_020752cc(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x40) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x40) = arg1;
        M2C_FIELD(arg0, s8 *, 0x44)  = 1;
    }
}
