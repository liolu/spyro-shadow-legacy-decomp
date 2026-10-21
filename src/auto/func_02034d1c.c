/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02020144();                            /* extern */
M2C_UNK func_02055bdc(s32);                         /* extern */
extern s32 data_020e6028;

void func_02034d1c(void) {
    func_02055bdc(data_020e6028);
    data_020e6028 = 0;
    func_02020144();
}
