/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02094d18(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_02094d48(M2C_UNK, s32, M2C_UNK);       /* extern */

s32 func_0207fed8(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    if (arg4 == 0x20) {
        func_02094d48(arg2, arg1, arg3);
    } else {
        func_02094d18(arg2, arg1, arg3);
    }
    return arg1;
}
