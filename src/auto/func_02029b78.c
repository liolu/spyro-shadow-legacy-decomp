/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02016f24(M2C_UNK *);                     /* extern */
extern M2C_UNK data_020deebc;
extern void *data_020e36c8;

void func_02029b78(void) {
    s32 temp_r4;

    temp_r4                                                                      = M2C_FIELD(data_020e36c8, s32 *, 8);
    M2C_FIELD(M2C_FIELD(func_02016f24(&data_020deebc), void **, 0xAC), s32 *, 4) = temp_r4;
}
