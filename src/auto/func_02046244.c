#include "m2c.h"

s32 func_02046244(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) == 0x11B) {
        return M2C_FIELD(arg0, s32 *, 0x74);
    }
    return M2C_FIELD(arg0, s32 *, 0x70) + M2C_FIELD(arg0, s32 *, 0x74);
}
