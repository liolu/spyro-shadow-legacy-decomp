/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200b5f8();                            /* extern */
M2C_UNK func_0200b664();                            /* extern */
extern M2C_UNK data_020da578;
extern s32 data_020df0fc;

void func_0200bc8c(void) {
    func_0200b664();
    func_0200b5f8();
    *((M2C_UNK *) ((s8 *) &data_020da578 + (data_020df0fc * 4))) = 0;
}
