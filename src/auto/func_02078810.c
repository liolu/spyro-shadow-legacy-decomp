/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02011f34();                                /* extern */
M2C_UNK func_02072418(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020786b4();                                /* extern */
extern M2C_UNK data_020deebc;

s32 func_02078810(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_020786b4();
    if ((M2C_FIELD(arg0, s32 *, 0x8E0) & 0x10000) && (temp_r0 != 0)) {
        M2C_FIELD(&data_020deebc, s8 *, 0x1F) = 1;
        func_02072418(func_02011f34(), 6, 0x45000000);
    } else {
        M2C_FIELD(&data_020deebc, s8 *, 0x1F) = 0;
    }
    return 0;
}
