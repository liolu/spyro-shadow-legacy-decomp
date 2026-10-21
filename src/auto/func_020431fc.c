/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02043280();                            /* extern */
M2C_UNK func_020432b0();                            /* extern */
extern M2C_UNK data_020ebbc8;

void func_020431fc(void) {
    s8 var_r0;

    if (M2C_FIELD(&data_020ebbc8, s32 *, 0x1C) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_020432b0();
        return;
    }
    func_02043280();
}
