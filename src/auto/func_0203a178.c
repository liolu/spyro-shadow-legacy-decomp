/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02080bb8(void *, M2C_UNK, s32);        /* extern */
s32 func_02080be8();                                /* extern */
extern s32 data_020e8140;
extern M2C_UNK data_020e8150;

void func_0203a178(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 var_r7;
    void *temp_r0;
    void *temp_r6;

    var_r7 = func_02080be8();
    if (var_r7 >= 0x3F) {
        var_r7 = 0x3F;
    }
    temp_r4 = data_020e8140 * 0x48;
    temp_r6 = (M2C_UNK *) ((s8 *) &data_020e8150 + temp_r4);
    temp_r0 = temp_r6 + 8;
    data_020e8140 += 1;
    func_02080bb8(temp_r0, arg0, var_r7);
    M2C_FIELD((temp_r6 + var_r7), s8 *, 8)           = 0;
    *((M2C_UNK *) ((s8 *) &data_020e8150 + temp_r4)) = arg1;
    M2C_FIELD(temp_r6, s32 *, 4)                     = (s32) (arg2 * 0xC);
}
