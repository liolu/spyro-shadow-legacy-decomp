#include "m2c.h"

extern M2C_UNK data_020fd120;

s32 func_0209c16c(void) {
    if (M2C_FIELD(&data_020fd120, s32 *, 0x34) != 0) {
        return 1;
    }
    return 0;
}
