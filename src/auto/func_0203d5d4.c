/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02077180();                            /* extern */
M2C_UNK func_02094e68(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_020bec60;

void *func_0203d5d4(void *arg0) {
    func_02077180();
    M2C_FIELD(arg0, s32 *, 0x5C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x58)   = (s32) M2C_FIELD(arg0, s32 *, 0x5C);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bec60;
    func_02094e68(arg0 + 0x68, 0x30, 4);
    M2C_FIELD(arg0, s8 *, 0x6C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    return arg0;
}
