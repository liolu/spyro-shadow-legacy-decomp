#include "m2c.h"

void *func_020402d4(s32 arg0, u32 *arg1, void *arg2, void *arg3) {
    void *var_r2;
    void *var_r3;

    var_r2 = arg2;
    var_r3 = arg3;
    if (var_r2 != NULL) {
        do {
            if ((u32) M2C_FIELD(var_r2, u32 *, 0xC) >= (u32) *arg1) {
                var_r3 = var_r2;
                var_r2 = M2C_FIELD(var_r2, void **, 0);
            } else {
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            }
        } while (var_r2 != NULL);
    }
    return var_r3;
}
