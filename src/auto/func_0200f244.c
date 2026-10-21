#include "m2c.h"

extern M2C_UNK data_020d9f9c;

s32 func_0200f244(void *arg0) {
    ((u8 *) &data_020d9f9c)[M2C_FIELD(arg0, u16 *, 6)] = ((u8 *) &data_020d9f9c)[M2C_FIELD(arg0, u16 *, 4)];
    return 1;
}
