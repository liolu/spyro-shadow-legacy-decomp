/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020044a0();                            /* extern */
s32 func_02011bc8();                                /* extern */
s32 func_02011f34();                                /* extern */
M2C_UNK func_02076b44(s32, M2C_UNK, M2C_UNK);       /* extern */
extern s32 data_020e5204;
extern s32 data_020e5208;
extern M2C_UNK data_020e5230;
extern M2C_UNK data_020e5264;
extern M2C_UNK data_020e52d0;

void func_02031834(void) {
    M2C_UNK *var_r8;
    s32 temp_r4;
    s32 var_r4;

    if (data_020e5208 == 1) {
        temp_r4 = func_02011f34();
        if (func_02011bc8() == 0) {
            func_02076b44(temp_r4 + 0x7C4, 0, 0);
            func_02076b44(temp_r4 + 0x768, 0, 0);
        }
    }
    var_r4                                = 0;
    data_020e5208                         = 0;
    M2C_FIELD(&data_020e5230, s8 *, 0x14) = 0;
    M2C_FIELD(&data_020e5264, s8 *, 0x14) = 0;
    if ((s32) data_020e5204 <= 0) {
        return;
    }
    var_r8 = &data_020e52d0;
    do {
        if (M2C_FIELD(var_r8, s32 *, 0x18) != 0) {
            func_020044a0();
            M2C_FIELD(var_r8, s32 *, 0x18) = 0;
        }
        M2C_FIELD(var_r8, s8 *, 0x14) = 0;
        var_r4 += 1;
        var_r8 = (M2C_UNK *) ((s8 *) var_r8 + 0x3C);
    } while (var_r4 < (s32) data_020e5204);
}
