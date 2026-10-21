/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020767d8();                            /* extern */
extern M2C_UNK data_020c1d34;

void *func_02076528(void *arg0) {
    func_020767d8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c1d34;
    M2C_FIELD(arg0, s32 *, 0x34)   = 0;
    M2C_FIELD(arg0, s32 *, 0x38)   = 0;
    M2C_FIELD(arg0, s8 *, 0x3C)    = 0;
    return arg0;
}
