/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02016f24(M2C_UNK *);                     /* extern */
void *func_020436f0(s32);                           /* extern */
s32 func_02043708();                                /* extern */
extern s32 data_020bf6a0;
extern M2C_UNK data_020deebc;

void func_0201402c(s32 arg0, s32 arg1) {
    s16 temp_r4;
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 > func_02043708()) {
        var_r4 = func_02043708();
    } else if (var_r4 < 0) {
        var_r4 = 0;
    }
    M2C_FIELD(func_020436f0(data_020bf6a0), s16 *, 4) = (s16) var_r4;
    temp_r4                                           = M2C_FIELD(func_020436f0(data_020bf6a0), s16 *, 4);
    M2C_FIELD(M2C_FIELD(func_02016f24(&data_020deebc), void **, 0xAC), s32 *, 0xC) = (s32) temp_r4;
}
