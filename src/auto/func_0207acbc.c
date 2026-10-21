/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0207acbc(void *arg0, s8 arg1) {
    if (M2C_FIELD(arg0, s8 *, 0x329) == arg1) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x329) = arg1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(void *, s32), 0x88)(arg0, M2C_FIELD(arg0, s32 *, 0x30C));
}
