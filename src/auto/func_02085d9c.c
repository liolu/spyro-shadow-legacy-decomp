/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02085e04();                    /* extern */

void func_02085d9c(s32 *arg0, M2C_UNK arg1) {
    if ((func_02085e04(((s8 *) arg0 + 8)) == 0) && (func_02085e04(((s8 *) arg0 + 0x10), arg1) == 0) &&
        (func_02085e04(((s8 *) arg0 + 0x18), arg1) == 0)) {
        return;
    }
    *arg0 |= 0x10;
}
