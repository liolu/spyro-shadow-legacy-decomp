#include "m2c.h"

extern M2C_UNK data_020daac0;

u16 func_02011efc(void) {
    return (u16) M2C_FIELD(&data_020daac0, s32 *, 4);
}
