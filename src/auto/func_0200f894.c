/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void **func_0200917c(s8, u8);                       /* extern */

s32 func_0200f894(void *arg0) {
    void **temp_r0;

    temp_r0 = func_0200917c(M2C_FIELD(arg0, s8 *, 4), M2C_FIELD(arg0, u8 *, 5));
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x14)(temp_r0);
    }
    return 1;
}
