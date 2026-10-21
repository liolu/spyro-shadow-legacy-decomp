/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201ff6c();                            /* extern */
M2C_UNK func_0201ffd0();                            /* extern */
M2C_UNK func_0202268c(s8);                          /* extern */
extern M2C_UNK data_020e2308;

void func_02020530(s8 arg0) {
    func_0201ffd0();
    func_0202268c(arg0);
    func_0201ff6c();
    M2C_FIELD(&data_020e2308, s8 *, 9) = arg0;
}
