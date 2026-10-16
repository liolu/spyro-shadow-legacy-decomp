/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02094380();                            /* extern */
extern s16 data_020fd948;

void func_0209d89c(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_020fd948 = 1;
        return;
    }
    func_02094380();
}
