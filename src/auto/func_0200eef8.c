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
extern u8 data_020da9b8;
extern u8 data_020da9c0;
extern s8 data_020da9f4;
extern s32 data_020daa08;
extern M2C_UNK data_020daa18;
extern M2C_UNK data_020daa38;
extern M2C_UNK func_02049c74;

s8 func_0200eef8(void *arg0) {
    s8 temp_r0;
    s8 var_r0;
    s8 var_r0_2;

    if (!(data_020daa08 & 1)) {
        func_02049ca0(&data_020daa38);
        func_020a6cf0(&data_020daa38, &func_02049c74, &data_020daa18);
        data_020daa08 |= 1;
    }
    if (data_020da9f4 == 0) {
        if (M2C_FIELD(arg0, u16 *, 4) == 0) {
            func_0205f4b0(func_02009394(), M2C_FIELD(arg0, u8 *, 7));
            func_020091c0(M2C_FIELD(arg0, s8 *, 6));
            data_020da9f4 = 0;
        } else {
            data_020da9b8 = M2C_FIELD(arg0, u8 *, 7);
            data_020da9c0 = (u8) M2C_FIELD(arg0, u8 *, 6);
            func_02049c98(&data_020daa38, M2C_FIELD(arg0, u16 *, 4));
            data_020da9f4 = 1;
        }
    } else {
        func_020062d0();
        func_02049c14(&data_020daa38, func_020822c0());
        if ((s32) M2C_FIELD(&data_020daa38, s32 *, 0x10) <= 0) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        temp_r0 = var_r0_2;
        if (temp_r0 != 0) {
            func_0205f4b0(func_02009394(temp_r0), data_020da9b8);
            func_020091c0((s8) data_020da9c0);
            data_020da9b8 = 0;
            data_020da9c0 = 0;
            data_020da9f4 = 0;
        }
    }
    if (data_020da9f4 == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
