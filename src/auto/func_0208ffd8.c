#include "m2c.h"

M2C_UNK func_02090a20();                            /* extern */
extern u16 data_020fae40;

void func_0208ffd8(s32 arg0) {
    data_020fae40 |= arg0;
    func_02090a20(arg0);
}
