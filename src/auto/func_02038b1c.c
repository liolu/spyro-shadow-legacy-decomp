#include "m2c.h"

s32 func_02038b1c(void *arg0, s32 arg1) {
    return *(s32 *) (M2C_FIELD(arg0, s32 *, 4) + (arg1 * 4));
}
