/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020935a4();                                /* extern */
M2C_UNK func_020939fc(M2C_UNK, s32);                /* extern */
M2C_UNK func_02093a10(M2C_UNK, s32);                /* extern */
s32 func_02093a24(M2C_UNK);                         /* extern */
s32 func_02093b0c(M2C_UNK);                         /* extern */
M2C_UNK func_02093e1c(s32);                         /* extern */
extern s32 data_020fb148;

void func_02093c5c(void) {
    func_02093a10(2, func_02093b0c(2));
    func_020939fc(2, func_02093a24(2));
    if ((data_020fb148 != 0) && ((func_020935a4() & 3) != 1)) {
        return;
    }
    func_02093e1c(0x0200002B);
}
