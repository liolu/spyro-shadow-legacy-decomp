/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207ff14(s32, M2C_UNK *, s32);         /* extern */
extern M2C_UNK data_020bde68;

void func_020277c0(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 & 0x80000000) {
        func_0207ff14(temp_r0 * 2, &data_020bde68, 0x471);
    } else {
        func_0207ff14(temp_r0, &data_020bde68, 0x475);
    }
    *arg0 = 0;
}
