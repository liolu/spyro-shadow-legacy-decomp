/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 lbl_020a4390();                               /* extern */
M2C_UNK func_0201f780();                            /* extern */
s32 func_0201f96c();                                /* extern */
M2C_UNK func_020a324c();                /* extern */
M2C_UNK func_020a4218();                            /* extern */
M2C_UNK func_020a47b0();                /* extern */
extern s8 data_020da9f8;

s8 func_0200f5b0(void *arg0) {
    s8 var_r0;
    u16 temp_r0;

    if (data_020da9f8 == 0) {
        if (M2C_FIELD(arg0, u16 *, 4) != 0) {
            data_020da9f8 = 1;
            temp_r0       = M2C_FIELD(arg0, u16 *, 4);
            if (temp_r0 != 0) {
                func_020a324c(0x3F000000, lbl_020a4390(temp_r0 << 0xC));
            } else {
                func_020a47b0(lbl_020a4390(temp_r0 << 0xC), 0x3F000000);
            }
            func_020a4218();
            func_0201f780();
        }
    } else if (func_0201f96c() != 4) {
        data_020da9f8 = 0;
    }
    if (data_020da9f8 == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
