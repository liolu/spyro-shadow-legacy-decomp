#include "m2c.h"

extern M2C_UNK data_020d9f9c;

s32 func_0200ede4(void *arg0) {
    u16 temp_r3;

    temp_r3                          = M2C_FIELD(arg0, u16 *, 4);
    ((u8 *) &data_020d9f9c)[temp_r3] = ((u8 *) &data_020d9f9c)[temp_r3] - M2C_FIELD(arg0, u8 *, 6);
    return 1;
}
