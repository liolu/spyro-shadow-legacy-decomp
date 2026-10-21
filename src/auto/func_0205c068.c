/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205b8c8();                            /* extern */
extern s32 data_020c0ee4;
extern s32 data_020c0ef4;
extern s32 data_020c0ef8;
extern M2C_UNK data_020c0f04;

void *func_0205c068(void *arg0) {
    func_0205b8c8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c0f04;
    M2C_FIELD(arg0, s32 *, 0x90)   = (s32) data_020c0ee4;
    M2C_FIELD(arg0, s32 *, 0x94)   = (s32) data_020c0ef8;
    M2C_FIELD(arg0, s32 *, 0x98)   = (s32) data_020c0ef4;
    M2C_FIELD(arg0, s32 *, 0x9C)   = 0;
    M2C_FIELD(arg0, s32 *, 0xA0)   = 0;
    M2C_FIELD(arg0, s32 *, 0xA4)   = 0;
    return arg0;
}
