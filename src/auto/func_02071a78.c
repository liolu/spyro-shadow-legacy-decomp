/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205092c();                            /* extern */
M2C_UNK func_0205c004(void *);                      /* extern */
M2C_UNK func_0205f250(void *);                      /* extern */
extern M2C_UNK data_020c17f8;

void *func_02071a78(void *arg0) {
    func_0205092c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c17f8;
    M2C_FIELD(arg0, s32 *, 0x4C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x50)   = 0;
    M2C_FIELD(arg0, s32 *, 0x54)   = 0;
    M2C_FIELD(arg0, s32 *, 0x58)   = 0;
    M2C_FIELD(arg0, s32 *, 0x5C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x60)   = 0;
    M2C_FIELD(arg0, s32 *, 0x64)   = 0;
    func_0205c004(arg0 + 0x68);
    func_0205f250(arg0 + 0x114);
    M2C_FIELD(arg0, s8 *, 0x230) = 0;
    return arg0;
}
