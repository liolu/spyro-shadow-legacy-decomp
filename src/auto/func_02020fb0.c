/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff8000();                            /* extern */
M2C_UNK func_02021048(s32, u32);                    /* extern */
M2C_UNK func_02021c1c(M2C_UNK *, M2C_UNK *, u32);   /* extern */
extern M2C_UNK data_020e2614;
extern M2C_UNK data_020e2ae4;
extern M2C_UNK data_020e2b10;
extern M2C_UNK data_020e2b40;

void func_02020fb0(u32 arg0) {
    s32 temp_r5;
    u32 var_r1;

    temp_r5 = M2C_FIELD(&data_020e2614, s32 *, 0) + (M2C_FIELD(&data_020e2614, s32 *, 4) * 2);
    func_01ff8000(arg0);
    if (M2C_FIELD(&data_020e2614, s32 *, 0x584) != 0) {
        if (arg0 >= 0x20U) {
            var_r1 = 0x20;
        } else {
            var_r1 = arg0;
        }
        func_02021048(temp_r5, var_r1);
    }
    if (M2C_FIELD(&data_020e2614, u8 *, 0x4D0) == 7) {
        return;
    }
    func_02021c1c(&data_020e2ae4, &data_020e2b10, arg0);
    func_02021c1c(&data_020e2ae4, &data_020e2b40, arg0);
}
