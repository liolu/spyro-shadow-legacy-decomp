/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020141c8(M2C_UNK *);                   /* extern */
M2C_UNK func_02014214(M2C_UNK *);                   /* extern */
s32 func_0205a744(M2C_UNK *, void *);               /* extern */
extern M2C_UNK data_020deebc;
extern M2C_UNK data_020def74;

s32 func_02014260(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_0205a744(&data_020def74, arg0);
    if (temp_r0 != 0) {
        if (M2C_FIELD(arg0, s32 *, 8) == 0x59) {
            func_02014214(&data_020deebc);
        }
        if (M2C_FIELD(arg0, s32 *, 8) == 0x5A) {
            func_020141c8(&data_020deebc);
        }
    }
    return temp_r0;
}
