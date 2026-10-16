#include "m2c.h"

s32 func_02015280(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(arg0, s32 *, 0x4);
}
