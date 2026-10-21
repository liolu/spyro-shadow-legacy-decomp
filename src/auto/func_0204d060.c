/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204f964(s32);                         /* extern */
M2C_UNK func_0207fe44(s32);                         /* extern */

void func_0204d060(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xF4);
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_0204f964(temp_r4);
        func_0207fe44(temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
}
