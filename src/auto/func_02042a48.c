/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020436f0(s32);                           /* extern */
u32 func_02051368(M2C_UNK *);                       /* extern */
u16 *func_02051548(M2C_UNK *);                      /* extern */
extern s32 data_020bf6a0;
extern M2C_UNK data_020ebbc8;

s8 func_02042a48(void) {
    s8 var_r0;
    u16 *var_r0_2;
    u16 temp_r1;
    u16 var_r4;
    u32 temp_r4;
    u32 var_r2;

    temp_r4  = func_02051368(&data_020ebbc8);
    var_r0_2 = func_02051548(&data_020ebbc8);
    var_r2   = temp_r4 >> 1;
    var_r4   = 0;
    if ((s32) var_r2 > 0) {
        do {
            temp_r1  = *var_r0_2;
            var_r0_2 = (u16 *) ((s8 *) var_r0_2 + 2);
            var_r2 -= 1;
            var_r4 += temp_r1;
        } while ((s32) var_r2 > 0);
    }
    if (var_r4 == M2C_FIELD(func_020436f0(data_020bf6a0), u16 *, 0x1C)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
