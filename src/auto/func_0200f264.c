#include "m2c.h"

extern M2C_UNK data_020d9f9c;

s32 func_0200f264(void *arg0) {
    ((s8 *) &data_020d9f9c)[M2C_FIELD(arg0, u16 *, 4)] = M2C_FIELD(arg0, u8 *, 6);
    return 1;
}
