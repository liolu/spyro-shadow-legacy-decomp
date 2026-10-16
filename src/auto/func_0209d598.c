/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02091ef4();                            /* extern */
M2C_UNK func_02094318(s32);                         /* extern */

void func_0209d598(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_02091ef4(arg0);
    }
    func_02094318(M2C_FIELD(arg1, s32 *, 4));
}
