/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201af08(s32, u16 *, u32);             /* extern */
s32 func_020426a0();                                /* extern */
void *func_020436f0(s32);                           /* extern */
u32 func_02051368(M2C_UNK *);                       /* extern */
u16 *func_02051548(M2C_UNK *);                      /* extern */
extern s32 data_020bf6a0;
extern M2C_UNK data_020ebbc8;

void func_02042604(void) {
    u16 *temp_r4_2;
    u16 *var_r0;
    u16 temp_r1;
    u16 var_r4;
    u32 temp_r4;
    u32 var_r2;

    temp_r4 = func_02051368(&data_020ebbc8);
    var_r0  = func_02051548(&data_020ebbc8);
    var_r2  = temp_r4 >> 1;
    var_r4  = 0;
    if ((s32) var_r2 > 0) {
        do {
            temp_r1 = *var_r0;
            var_r0  = (u16 *) ((s8 *) var_r0 + 2);
            var_r2 -= 1;
            var_r4 += temp_r1;
        } while ((s32) var_r2 > 0);
    }
    M2C_FIELD(func_020436f0(data_020bf6a0), u16 *, 0x1C) = var_r4;
    if (func_020426a0() != 1) {
        return;
    }
    temp_r4_2 = func_02051548(&data_020ebbc8);
    func_0201af08(data_020bf6a0, temp_r4_2, func_02051368(&data_020ebbc8));
}
