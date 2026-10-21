/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02064698(s32);                         /* extern */
M2C_UNK func_02066bc0();                            /* extern */
M2C_UNK func_02068e0c(s32, s32);                    /* extern */
M2C_UNK func_02070d60(s32, s32);                    /* extern */

void func_02071804(s32 arg0) {
    func_02066bc0();
    func_02068e0c(arg0 + 0x98, arg0);
    func_02070d60(arg0 + 0x9C, arg0);
    func_02064698(arg0);
}
