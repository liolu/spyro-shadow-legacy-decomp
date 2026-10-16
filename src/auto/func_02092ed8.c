/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02092de4();                            /* extern */
s32 func_02094304();                                /* extern */
M2C_UNK func_02094318(s32);                         /* extern */

void func_02092ed8(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_02094304();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02092de4();
    func_02094318(temp_r4);
}
