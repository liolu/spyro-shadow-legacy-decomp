#include "m2c.h"

s32 func_02080268(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28) - M2C_FIELD(arg0, s32 *, 0x20);
}
