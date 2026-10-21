#include "engine.h"
#include "m2c.h"

void func_02051bfc(s32 arg0) {
    s32 var_r2;
    u32 var_r3;

    var_r2 = arg0;
    var_r3 = 0;
    do {
        var_r3 += 1;
        M2C_FIELD(var_r2, s8 *, 0x178) = 1;
        var_r2 += 0xFC;
    } while (var_r3 < 0x3CU);
    M2C_FIELD(arg0, s32 *, 0x3C70) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C6C) = 0;
    M2C_FIELD(arg0, s8 *, 0x3BC5)  = 0;
    M2C_FIELD(arg0, s32 *, 0x3C74) = 0;
}
