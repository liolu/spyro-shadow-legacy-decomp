/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200afb0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0201817c(s32);                         /* extern */
M2C_UNK func_0208f82c(M2C_UNK);                     /* extern */
M2C_UNK func_0208f848(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0208ff2c(M2C_UNK);                     /* extern */
M2C_UNK func_02090768(M2C_UNK);                     /* extern */
extern s32 data_020df0fc;

void func_0200b1a0(s32 arg0) {
    s32 temp_r4;

    temp_r4 = data_020df0fc;
    if (arg0 == 0) {
        func_02090768(1);
        func_0208f848(1, 0, 0);
        func_0201817c(0);
        func_0200afb0(0, 0);
    } else {
        func_0208ff2c(4);
        func_0208f82c(0);
        func_0201817c(1);
        func_0200afb0(0, 0);
    }
    func_0201817c(temp_r4);
}
