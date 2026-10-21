/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02018208();                                /* extern */
M2C_UNK func_02082e48(s32, s32);                    /* extern */

void func_02059af4(void *arg0) {
    func_02082e48(func_02018208(), M2C_FIELD(arg0, s32 *, 0x10));
}
