/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02011f14();                                /* extern */
extern M2C_UNK data_020daac0;

void func_02016750(void *arg0, s32 arg1) {
    if ((func_02011f14() == 1) && (arg1 == 0)) {
        M2C_FIELD(&data_020daac0, s8 *, 0x40) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}
