/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208fb64();                            /* extern */
M2C_UNK func_0208feb0(M2C_UNK);                     /* extern */

void func_02082fb8(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_0208fb64();
    func_0208feb0(arg1);
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | arg2;
}
