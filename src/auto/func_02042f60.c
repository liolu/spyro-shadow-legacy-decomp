/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02042ffc();                            /* extern */
M2C_UNK func_020430b8();                            /* extern */
M2C_UNK func_0204314c();                            /* extern */
extern M2C_UNK data_020ebbc8;

void func_02042f60(s32 arg0) {
    s8 var_r0;

    if (arg0 != 0) {
        func_0204314c();
        return;
    }
    if (M2C_FIELD(&data_020ebbc8, s32 *, 0x1C) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_020430b8();
        return;
    }
    func_02042ffc();
}
