/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02006acc(s32);                         /* extern */
M2C_UNK func_02064714(s32);                         /* extern */
M2C_UNK func_02064800(s32);                         /* extern */
M2C_UNK func_02064a44();                            /* extern */

s32 func_02066dc0(s32 arg0) {
    func_02064a44();
    func_02064714(arg0);
    func_02064800(arg0);
    func_02006acc(arg0 + 0x8C);
    return arg0;
}
