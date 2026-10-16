/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02096f24(void *, s32);                     /* extern */
M2C_UNK func_020970c8(void *, s32);                 /* extern */
M2C_UNK func_020974d0();                            /* extern */
s32 func_02097570(s32);                             /* extern */

s32 func_02097488(void *arg0) {
    func_020970c8(arg0, func_02096f24(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_02097570(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_020974d0();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
