/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02091f88();                            /* extern */
s32 func_02092078(); /* extern */

void func_020921a8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_02092078() <= 0) {
        return;
    }
    do {
        func_02091f88();
    } while (func_02092078(arg0, arg1, arg2, arg3) > 0);
}
