/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020044a0();                            /* extern */
M2C_UNK func_02072e84(void *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020b6bd8;
extern M2C_UNK data_020f64f0;

void func_02072f2c(void *arg0, s8 arg1) {
    s8 var_r0;

    if (M2C_FIELD(arg0, s8 *, 0x20) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s8 *, 0x21) == arg1) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x21) = arg1;
    if (M2C_FIELD(arg0, s8 *, 0x21) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 == 0) {
            func_02072e84(arg0 + 0x24, &data_020f64f0, &data_020b6bd8);
            M2C_FIELD(arg0, s32 *, 0x5C) = 0;
            M2C_FIELD(arg0, s8 *, 0x60)  = 2;
            M2C_FIELD(arg0, s32 *, 0x58) = 0x1000;
            return;
        }
        goto block_10;
    }
block_10:
    if (M2C_FIELD(arg0, s8 *, 0x22) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        func_020044a0();
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x38) = 0;
}
