/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020062d0();                            /* extern */
M2C_UNK func_020091c0();                          /* extern */
s32 func_02009394();                              /* extern */
M2C_UNK func_02049c14();              /* extern */
M2C_UNK func_02049c98();              /* extern */
M2C_UNK func_02049ca0();                   /* extern */
M2C_UNK func_0205f4b0();                     /* extern */
s32 func_020822c0();                                /* extern */
M2C_UNK func_020a6cf0(); /* extern */
extern u8 data_020da9ac;
extern s8 data_020da9b0;
extern u8 data_020daa00;
extern s32 data_020daa04;
extern M2C_UNK data_020daa0c;
extern M2C_UNK data_020daa24;
extern M2C_UNK func_02049c74;

s8 func_0200f8ec(void *arg0) {
    s8 temp_r0;
    s8 var_r0;
    s8 var_r0_2;

    if (!(data_020daa04 & 1)) {
        func_02049ca0(&data_020daa24);
        func_020a6cf0(&data_020daa24, &func_02049c74, &data_020daa0c);
        data_020daa04 |= 1;
    }
    if (data_020da9b0 == 0) {
        if (M2C_FIELD(arg0, u16 *, 4) == 0) {
            func_0205f4b0(func_02009394(), M2C_FIELD(arg0, u8 *, 7));
            func_020091c0(M2C_FIELD(arg0, s8 *, 6));
            data_020da9b0 = 0;
        } else {
            data_020da9ac = M2C_FIELD(arg0, u8 *, 7);
            data_020daa00 = (u8) M2C_FIELD(arg0, u8 *, 6);
            func_02049c98(&data_020daa24, (u16) (M2C_FIELD(arg0, u16 *, 4) * 0x1E));
            data_020da9b0 = 1;
        }
    } else {
        func_020062d0();
        func_02049c14(&data_020daa24, func_020822c0());
        if ((s32) M2C_FIELD(&data_020daa24, s32 *, 0x10) <= 0) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        temp_r0 = var_r0_2;
        if (temp_r0 != 0) {
            func_0205f4b0(func_02009394(temp_r0), data_020da9ac);
            func_020091c0((s8) data_020daa00);
            data_020da9ac = 0;
            data_020daa00 = 0;
            data_020da9b0 = 0;
        }
    }
    if (data_020da9b0 == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
