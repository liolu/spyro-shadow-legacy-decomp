/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02052ee4(void *);                      /* extern */
M2C_UNK func_02058ed0();                            /* extern */
extern M2C_UNK data_020c0548;
extern M2C_UNK data_020c0570;

void *func_02051d78(void *arg0) {
    func_02058ed0();
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020c0548;
    M2C_FIELD(arg0, M2C_UNK **, 0xAC) = &data_020c0570;
    M2C_FIELD(arg0, s32 *, 0x3C68)    = 0;
    M2C_FIELD(arg0, s32 *, 0x3C6C)    = 0;
    M2C_FIELD(arg0, s32 *, 0x3C70)    = 0;
    M2C_FIELD(arg0, s32 *, 0x3C74)    = 0;
    M2C_FIELD(arg0, s32 *, 0x3C78)    = 0x1000;
    func_02052ee4(arg0 + 0x3C7C);
    return arg0;
}
