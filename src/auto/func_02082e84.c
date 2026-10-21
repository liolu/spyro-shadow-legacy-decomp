#include "m2c.h"

M2C_UNK func_020833ac(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020f6f58;

void func_02082e84(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s8 *, 0x10) = 1;
    func_020833ac(&data_020f6f58);
}
