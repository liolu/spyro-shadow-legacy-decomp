/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207ffe8();                            /* extern */
M2C_UNK func_02080160();                            /* extern */
extern s32 data_020f6e4c;

void func_0207fde0(void) {
    if (data_020f6e4c != 0) {
        return;
    }
    data_020f6e4c += 1;
    func_02080160();
    func_0207ffe8();
}
