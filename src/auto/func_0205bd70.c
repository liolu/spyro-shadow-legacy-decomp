/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204a308(void *);                      /* extern */
M2C_UNK func_0205c068();                            /* extern */
extern s32 data_020c0e9c;
extern s32 data_020c0ea4;
extern s32 data_020c0eb4;
extern s32 data_020c0eb8;
extern M2C_UNK data_020c0edc;

void *func_0205bd70(void *arg0) {
    func_0205c068();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c0edc;
    M2C_FIELD(arg0, s32 *, 0xAC)   = 0;
    M2C_FIELD(arg0, s32 *, 0xB0)   = 0;
    M2C_FIELD(arg0, s32 *, 0xBC)   = 0x1F;
    M2C_FIELD(arg0, s32 *, 0xC0)   = 0;
    M2C_FIELD(arg0, s8 *, 0xC4)    = 1;
    M2C_FIELD(arg0, s8 *, 0xC5)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC8)   = (s32) data_020c0ea4;
    M2C_FIELD(arg0, s32 *, 0xCC)   = (s32) data_020c0e9c;
    M2C_FIELD(arg0, s32 *, 0xD0)   = (s32) data_020c0eb8;
    M2C_FIELD(arg0, s32 *, 0xD4)   = (s32) data_020c0eb4;
    func_0204a308(arg0 + 0xDC);
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    return arg0;
}
