/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200a188(M2C_UNK);                     /* extern */
M2C_UNK func_0207fe8c(M2C_UNK, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_0208fbb4();                            /* extern */
M2C_UNK func_0208fcdc();                            /* extern */
M2C_UNK func_0208fff8(M2C_UNK);                     /* extern */
M2C_UNK func_02090768(M2C_UNK);                     /* extern */
extern s32 data_020df0fc;
extern M2C_UNK data_020e2114;

void func_0201ebac(void) {
    func_0208fbb4();
    func_0208fff8(1);
    func_0208fcdc();
    func_0207fe8c(3, 0x06800000, 0x7FFF, 0x20000, 0x10);
    func_0208fff8(1);
    func_0207fe8c(3, *((M2C_UNK *) ((s8 *) &data_020e2114 + (data_020df0fc * 0x130))), 0x7FFF, 0x40000, 0x10);
    func_0200a188(0);
    func_02090768(2);
}
