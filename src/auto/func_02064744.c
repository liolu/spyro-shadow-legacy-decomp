/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02055148(s32);                             /* extern */
M2C_UNK func_020551b4(s32);                         /* extern */
s32 func_02064780();                                /* extern */

void func_02064744(void *arg0) {
    if (func_02064780() == 0) {
        return;
    }
    if (func_02055148(M2C_FIELD(arg0, s32 *, 0x6C)) != 0) {
        return;
    }
    func_020551b4(M2C_FIELD(arg0, s32 *, 0x6C));
}
