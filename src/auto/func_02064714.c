/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02055bdc(s32);                         /* extern */
s32 func_02064780();                                /* extern */

void func_02064714(void *arg0) {
    if (func_02064780() == 0) {
        return;
    }
    func_02055bdc(M2C_FIELD(arg0, s32 *, 0x6C));
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
}
