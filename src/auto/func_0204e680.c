/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02050fd8();                            /* extern */
extern M2C_UNK data_020c02d8;

void *func_0204e680(void *arg0) {
    func_02050fd8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c02d8;
    M2C_FIELD(arg0, s8 *, 8)       = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    return arg0;
}
