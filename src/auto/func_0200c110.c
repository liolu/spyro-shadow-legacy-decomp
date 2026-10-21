/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200bf10();                            /* extern */

void func_0200c110(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 6) != 0) {
        M2C_FIELD(arg0, u8 *, 6) = 0U;
        M2C_FIELD(arg0, u8 *, 5) = 0U;
    }
    if (M2C_FIELD(arg0, u8 *, 5) == 0) {
        return;
    }
    func_0200bf10(arg0, arg1);
}
