/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207ff14(s32, M2C_UNK *, s32);         /* extern */
extern M2C_UNK data_020bde3c;

void func_02021160(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == 0) {
        return;
    }
    func_0207ff14(temp_r0, &data_020bde3c, 0x99F);
    *arg0 = 0;
}
