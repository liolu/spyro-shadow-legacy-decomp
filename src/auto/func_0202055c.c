/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201ff6c();                            /* extern */
M2C_UNK func_0201ffd0();                            /* extern */
M2C_UNK func_02028628(s32);                         /* extern */
extern M2C_UNK data_020b5808;

void func_0202055c(s32 arg0) {
    func_0201ffd0();
    func_02028628(*((M2C_UNK *) ((s8 *) &data_020b5808 + (arg0 * 4))));
    func_0201ff6c();
}
