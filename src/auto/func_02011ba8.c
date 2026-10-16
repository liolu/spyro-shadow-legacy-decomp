#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020daac0;

s32 func_02011ba8(void) {
    return M2C_FIELD(&data_020daac0, s32 *, 0x38);
}
