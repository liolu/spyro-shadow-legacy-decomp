/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02076ccc();                            /* extern */
extern M2C_UNK data_020c1cd8;

void *func_02075588(void *arg0) {
    func_02076ccc();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c1cd8;
    M2C_FIELD(arg0, s32 *, 0x34)   = 0;
    M2C_FIELD(arg0, s32 *, 0x28)   = 0;
    M2C_FIELD(arg0, s32 *, 0x2C)   = 0;
    M2C_FIELD(arg0, s8 *, 0x44)    = 0;
    M2C_FIELD(arg0, s32 *, 0x40)   = -1;
    if ((M2C_FIELD(arg0, s32 *, 0x18) != 3) || (M2C_FIELD(arg0, s32 *, 0x1C) != 0)) {
        M2C_FIELD(arg0, s8 *, 0x44) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 3;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x3C) != -1) {
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    }
    return arg0;
}
