/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_0204e42c(void *, s32, void *);            /* extern */

void func_0205ed6c(void *arg0, s32 arg1) {
    void *temp_r3;

    if (M2C_FIELD(arg0, s8 *, 0x85) == 0) {
        return;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x64);
    *func_0204e42c(arg0 + 0x6C, M2C_FIELD(arg0, s32 *, 0x88),
                   temp_r3 + M2C_FIELD((temp_r3 + M2C_FIELD(temp_r3, u16 *, 0xE)), s32 *, 0xC)) = arg1;
}
