#include "m2c.h"

M2C_UNK func_02027acc(M2C_UNK);                     /* extern */
extern M2C_UNK data_020e2614;

void func_02022640(s8 arg0) {
    M2C_FIELD(&data_020e2614, s8 *, 0x58C) = arg0;
    func_02027acc(4);
}
