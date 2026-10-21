/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02007464(void *arg0, s32 arg1) {
    M2C_UNK (*temp_r2)(arg0, arg1);

    temp_r2 = M2C_FIELD(arg0, M2C_UNK(**)(), 0x9C);
    if (temp_r2 == NULL) {
        return;
    }
    temp_r2(arg0, arg1);
}
