/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02016f24(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020deebc;

void func_020633ec(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xA4)  = func_02016f24(&data_020deebc);
    M2C_FIELD(arg0, s32 *, 0x184) = -1;
    M2C_FIELD(arg0, s8 *, 0x191)  = 0;
}
