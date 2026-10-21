/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208fba0();                            /* extern */
M2C_UNK func_020905fc(M2C_UNK);                     /* extern */

void func_02083000(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_0208fba0();
    func_020905fc(arg1);
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | arg2;
}
