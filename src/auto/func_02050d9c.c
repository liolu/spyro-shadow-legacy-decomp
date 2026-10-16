/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207fe44();                            /* extern */
extern M2C_UNK data_020c0498;
extern s32 data_020ebd2c;

M2C_UNK **func_02050d9c(M2C_UNK **arg0) {
    *arg0         = &data_020c0498;
    data_020ebd2c = 0;
    func_0207fe44(arg0);
    return arg0;
}
