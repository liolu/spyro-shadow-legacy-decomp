/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02076ccc();                            /* extern */
extern M2C_UNK data_020c1d60;

void *func_020767d8(void *arg0) {
    func_02076ccc();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c1d60;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s8 *, 0x30)    = 0;
    M2C_FIELD(arg0, s32 *, 0x1C)   = -1;
    M2C_FIELD(arg0, s32 *, 0x20)   = -1;
    M2C_FIELD(arg0, s32 *, 0x24)   = -1;
    M2C_FIELD(arg0, s8 *, 0x28)    = 0;
    M2C_FIELD(arg0, s32 *, 0x2C)   = 0;
    return arg0;
}
