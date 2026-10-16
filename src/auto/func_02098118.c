/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0209c12c(u16);                         /* extern */
M2C_UNK func_0209c14c(u16);                         /* extern */
extern s32 data_020fce1c;

s32 func_02098118(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_0209c14c((u16) data_020fce1c);
            return 0;
        case 10:
            func_0209c12c((u16) data_020fce1c);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
