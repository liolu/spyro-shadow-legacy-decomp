/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020939fc(M2C_UNK, s32);                /* extern */
M2C_UNK func_02093a10(M2C_UNK, s32);                /* extern */
s32 func_02093a24(M2C_UNK);                         /* extern */
s32 func_02093b0c(M2C_UNK);                         /* extern */
extern s32 data_020fb144;

void func_02093cd0(void) {
    if (data_020fb144 != 0) {
        return;
    }
    data_020fb144 = 1;
    func_02093a10(0, func_02093b0c(0));
    func_020939fc(0, func_02093a24(0));
    func_020939fc(2, 0);
    func_02093a10(2, 0);
    func_02093a10(3, func_02093b0c(3));
    func_020939fc(3, func_02093a24(3));
    func_02093a10(4, func_02093b0c(4));
    func_020939fc(4, func_02093a24(4));
    func_02093a10(5, func_02093b0c(5));
    func_020939fc(5, func_02093a24(5));
    func_02093a10(6, func_02093b0c(6));
    func_020939fc(6, func_02093a24(6));
}
