/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02003958();                                /* extern */

void func_0200384c(void *arg0, void *arg1) {
    s32 temp_r0;
    void *temp_r1;

    temp_r0 = func_02003958();
    temp_r1 = (void *) (temp_r0 + 0xC + M2C_FIELD((temp_r0 + (M2C_FIELD(arg0, u8 *, 0xB3) * 2)), u16 *, 0xC));
    M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(temp_r1, u8 *, 2);
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_r1, u8 *, 3);
}
