/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020954b8(s32, M2C_UNK);                /* extern */
extern s32 data_020f9fd0;

void func_0208d7fc(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020954b8(arg0, 0);
    data_020f9fd0 &= ~arg0;
}
