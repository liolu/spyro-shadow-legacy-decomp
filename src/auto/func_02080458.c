/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020803f4();                            /* extern */
extern M2C_UNK (*data_020f6ef8)(s32);

void func_02080458(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020803f4();
    data_020f6ef8(arg0);
}
