/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02096190();                            /* extern */
s32 func_02096374(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0209639c(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020fb20c;
extern M2C_UNK func_02094394;

void func_020943d8(void) {
    if (data_020fb20c != 0) {
        return;
    }
    data_020fb20c = 1;
    func_02096190();
    do {

    } while (func_02096374(0xC, 1) == 0);
    func_0209639c(0xC, &func_02094394);
}
