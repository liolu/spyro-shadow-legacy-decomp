/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
#include "m2c.h"

void *func_02084f98(void *arg0, s16 arg1) {
    u8 *temp_r3;

    temp_r3                        = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r3, s16 *, 0)   = arg1;
    M2C_FIELD(temp_r3, s16 *, 2)   = 0;
    M2C_FIELD(temp_r3, s32 *, 4)   = (s32) (M2C_FIELD(arg0, s32 *, 4) - (((s32) temp_r3) + 0x10));
    M2C_FIELD(temp_r3, s32 *, 8)   = 0;
    M2C_FIELD(temp_r3, s32 *, 0xC) = 0;
    return temp_r3;
}
