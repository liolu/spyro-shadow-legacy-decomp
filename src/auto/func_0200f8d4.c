#include "m2c.h"

extern u8 data_020d9f9c;

s32 func_0200f8d4(void *arg0) {
    data_020d9f9c = M2C_FIELD(arg0, u8 *, 4);
    return 1;
}
