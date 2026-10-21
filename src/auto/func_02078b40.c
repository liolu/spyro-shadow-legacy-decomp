#include "m2c.h"

void *func_02078b40(void *arg0) {
    void *var_r0;

    var_r0 = arg0;
    if (M2C_FIELD(var_r0, s8 *, 0x8DC) != 0) {
        var_r0 += 0x2F4;
    }
    return var_r0;
}
