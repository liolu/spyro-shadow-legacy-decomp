/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020514cc(void *);                      /* extern */

void func_02051370(void *arg0, s32 arg1) {
    u8 *temp_r3;
    u8 *temp_r3_2;

    if (arg1 == 1) {
        temp_r3 = M2C_FIELD(arg0, u8 **, 8);
        *temp_r3 |= 1 << M2C_FIELD(arg0, u8 *, 0xC);
    } else {
        temp_r3_2 = M2C_FIELD(arg0, u8 **, 8);
        *temp_r3_2 &= ~(1 << M2C_FIELD(arg0, u8 *, 0xC));
    }
    func_020514cc(arg0);
    M2C_FIELD(arg0, s8 *, 0x20) = 1;
}
