/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201af38(s32, s32, s32);               /* extern */
s32 func_0201af88(s32, s32);                        /* extern */
s32 func_020436f0(s32);                             /* extern */
s32 func_02051368(M2C_UNK *);                       /* extern */
s32 func_02051548(M2C_UNK *);                       /* extern */
extern s32 data_020bf6a0;
extern M2C_UNK data_020ebbc8;

void func_02042ac0(void) {
    s32 temp_r4;

    if (func_0201af88(data_020bf6a0, func_020436f0(data_020bf6a0)) != 1) {
        return;
    }
    temp_r4 = func_02051548(&data_020ebbc8);
    func_0201af38(data_020bf6a0, temp_r4, func_02051368(&data_020ebbc8));
}
