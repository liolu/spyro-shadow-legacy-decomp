/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200917c(s8, u8);                          /* extern */
void *func_02016f24(M2C_UNK *);                     /* extern */
extern M2C_UNK data_020deebc;

s32 func_0200dc88(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_0200917c(M2C_FIELD(arg0, s8 *, 4), M2C_FIELD(arg0, u8 *, 5));
    M2C_FIELD(M2C_FIELD(func_02016f24(&data_020deebc), void **, 0xAC), s32 *, 4) = temp_r4;
    return 1;
}
