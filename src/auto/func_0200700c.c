/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02006ec8();                            /* extern */
s32 func_0207fe74(s32);                             /* extern */
M2C_UNK func_0209dcb8();                            /* extern */
M2C_UNK func_0209e90c(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_020bcb1c;
extern M2C_UNK data_020bcb38;

void func_0200700c(void *arg0, u32 arg1) {
    s32 temp_r0;

    if (arg1 > 0x3FFFFFFFU) {
        func_02006ec8();
    }
    temp_r0 = func_0207fe74(arg1 * 4);
    if (temp_r0 == 0) {
        func_0209e90c(&data_020bcb38, &data_020bcb1c);
        func_0209dcb8();
    }
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    M2C_FIELD(arg0, u32 *, 8) = arg1;
}
