/* compiler: 1.2/b56  */
#include "m2c.h"

M2C_UNK func_020186dc(M2C_UNK);                     /* extern */
M2C_UNK func_020426a0();                            /* extern */
s32 func_02042a48();                                /* extern */
s32 func_02042ac0();                                /* extern */
M2C_UNK func_02042d00();                            /* extern */
M2C_UNK func_02042fc4();                            /* extern */
M2C_UNK func_020431fc();                            /* extern */
M2C_UNK func_0204333c();                            /* extern */
s32 func_02043494();                                /* extern */
void *func_020436f0(s32);                           /* extern */
M2C_UNK func_0204a89c(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_02051318(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 data_020bf6a0;
extern M2C_UNK data_020ebbc8;

s32 func_0204297c(s32 arg0) {
    M2C_UNK var_r0;

    data_020bf6a0 = arg0;
    if ((func_02042ac0() != 0) && ((func_020436f0(data_020bf6a0), (func_02043494() == 0)) || (func_02042a48() == 0))) {
        return 0;
    }
    if ((s8) ((u32) (M2C_FIELD(func_020436f0(data_020bf6a0), u8 *, 0xF) << 0x1F) >> 0x1F) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    func_020186dc(var_r0);
    func_02042d00();
    func_020426a0();
    M2C_FIELD(&data_020ebbc8, s32 *, 0x1C) = 1;
    func_02051318(&data_020ebbc8, 0, 0);
    func_02042fc4();
    func_020431fc();
    func_0204333c();
    func_0204a89c(&data_020ebbc8, 0);
    return 1;
}
