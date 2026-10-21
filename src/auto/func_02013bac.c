/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void *func_020436f0(s32);
s32 func_0204380c(void);

extern s32 data_020bf6a0;

void func_02013bac(s32 arg0, s32 arg1) {
    u8 var_r4;

    var_r4 = (u8) arg1;
    if ((s32) var_r4 >= func_0204380c()) {
        var_r4 = func_0204380c() - 1;
    }
    M2C_FIELD(func_020436f0(data_020bf6a0), u8 *, 0x12) = var_r4;
}
