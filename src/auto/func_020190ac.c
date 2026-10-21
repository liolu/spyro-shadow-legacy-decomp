/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02016f24(M2C_UNK *);                       /* extern */
M2C_UNK func_02063ca8(s32);                         /* extern */
M2C_UNK func_02064104(s32, s32);                    /* extern */
s32 func_02064348();                                /* extern */
s32 func_0207fe74(M2C_UNK);                         /* extern */
extern M2C_UNK data_020deebc;

void func_020190ac(void) {
    s32 var_r4;

    var_r4 = func_0207fe74(0x1AC);
    if (var_r4 != 0) {
        var_r4 = func_02064348();
    }
    func_02064104(var_r4, func_02016f24(&data_020deebc));
    func_02063ca8(var_r4);
}
