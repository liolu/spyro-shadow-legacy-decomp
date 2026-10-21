/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02076ccc();                            /* extern */
M2C_UNK func_02076eac(void *, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern s32 data_020c1de8;
extern M2C_UNK data_020c1df4;

void *func_02077108(void *arg0) {
    func_02076ccc();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c1df4;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s32 *, 0x28)   = 0;
    M2C_FIELD(arg0, s32 *, 0x2C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x1C)   = 3;
    M2C_FIELD(arg0, s32 *, 0x20)   = 0;
    M2C_FIELD(arg0, s32 *, 0x24)   = 0;
    M2C_FIELD(arg0, s8 *, 0x34)    = 0;
    M2C_FIELD(arg0, s32 *, 0x30)   = 0;
    func_02076eac(arg0, data_020c1de8, -1, -1, -1, 0);
    return arg0;
}
