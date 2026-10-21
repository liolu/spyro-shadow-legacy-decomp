/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201ff6c();                            /* extern */
M2C_UNK func_0201ffd0();                            /* extern */
M2C_UNK func_02022d18();                            /* extern */
extern s32 data_020e2308;

void func_020206c8(void) {
    if (data_020e2308 != 1) {
        return;
    }
    func_0201ffd0();
    func_02022d18();
    func_0201ff6c();
}
