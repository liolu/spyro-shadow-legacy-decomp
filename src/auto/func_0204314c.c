/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020436f0(s32);                           /* extern */
s32 func_02051300(M2C_UNK *);                       /* extern */
M2C_UNK func_02051318(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02051370(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020513d0(M2C_UNK *, s8 *, M2C_UNK);    /* extern */
extern s32 data_020bf6a0;
extern M2C_UNK data_020ebbc8;

void func_0204314c(void) {
    s8 sp0;
    s32 var_r8;

    sp0 = 6;
    func_020513d0(&data_020ebbc8, &sp0, 1);
    var_r8 = 0;
    do {
        if (var_r8 == ((u32) (M2C_FIELD(func_020436f0(data_020bf6a0), u8 *, 0xF) << 0x18) >> 0x19)) {
            func_02051370(&data_020ebbc8, 1);
        } else {
            func_02051370(&data_020ebbc8, 0);
        }
        var_r8 += 1;
    } while (var_r8 < 0x29);
    if (func_02051300(&data_020ebbc8) == 0) {
        return;
    }
    func_02051318(&data_020ebbc8, 1, 1);
}
