/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 lbl_020a4390();                               /* extern */
void *func_0200917c();                        /* extern */
M2C_UNK func_020a324c();                /* extern */
s32 func_020a4218();                                /* extern */
M2C_UNK func_020a47b0();                /* extern */
void *func_020a6efc(); /* extern */
extern M2C_UNK data_020bcb88;
extern M2C_UNK data_020bcb94;

s32 func_0200e828(void *arg0) {
    s16 temp_r0_2;
    s16 temp_r0_3;
    void *temp_r0;
    void *var_r4;

    temp_r0 = func_0200917c(M2C_FIELD(arg0, s8 *, 4), M2C_FIELD(arg0, u8 *, 5));
    var_r4  = temp_r0;
    if (var_r4 != NULL) {
        var_r4 = func_020a6efc(temp_r0, &data_020bcb88, &data_020bcb94, -1);
    }
    if (M2C_FIELD(arg0, u8 *, 8) != 0) {
        temp_r0_2 = M2C_FIELD(arg0, s16 *, 6);
        if ((s32) temp_r0_2 > 0) {
            func_020a324c(0x3F000000, lbl_020a4390(temp_r0_2 << 0x10));
        } else {
            func_020a47b0(lbl_020a4390(temp_r0_2 << 0x10), 0x3F000000);
        }
        M2C_FIELD(var_r4, s32 *, 0x24) = (s32) (M2C_FIELD(var_r4, s32 *, 0x24) + func_020a4218());
    } else {
        temp_r0_3 = M2C_FIELD(arg0, s16 *, 6);
        if ((s32) temp_r0_3 > 0) {
            func_020a324c(0x3F000000, lbl_020a4390(temp_r0_3 << 0x10));
        } else {
            func_020a47b0(lbl_020a4390(temp_r0_3 << 0x10), 0x3F000000);
        }
        M2C_FIELD(var_r4, s32 *, 0x24) = func_020a4218();
    }
    return 1;
}
