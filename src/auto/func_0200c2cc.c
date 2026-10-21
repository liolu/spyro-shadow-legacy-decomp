#include "m2c.h"

extern u8 data_020bd638;

s32 func_0200c2cc(void *arg0) {
    data_020bd638 = M2C_FIELD(arg0, u8 *, 4);
    return 1;
}
