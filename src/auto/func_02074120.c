/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02076a94();                            /* extern */
M2C_UNK func_02094e68(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_020c1b8c;
extern M2C_UNK data_020c1b9c;

void *func_02074120(void *arg0) {
    func_02076a94();
    M2C_FIELD(arg0, s32 *, 0xEC)      = 0;
    M2C_FIELD(arg0, s32 *, 0xE8)      = (s32) M2C_FIELD(arg0, s32 *, 0xEC);
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020c1b8c;
    M2C_FIELD(arg0, M2C_UNK **, 0x60) = &data_020c1b9c;
    M2C_FIELD(arg0, s32 *, 0x100)     = 0;
    func_02094e68(arg0 + 0xF8, 0x30, 4);
    M2C_FIELD(arg0, s8 *, 0xFC) = 0;
    return arg0;
}
