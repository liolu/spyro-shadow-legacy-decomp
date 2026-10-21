#include "m2c.h"

extern s8 data_020df114;

s32 func_0207f2a4(s32 arg0, void *arg1) {
    if (((s32) M2C_FIELD(arg1, s32 *, 4) < -0x19000) && (data_020df114 == 0)) {
        return 3;
    }
    return 0;
}
