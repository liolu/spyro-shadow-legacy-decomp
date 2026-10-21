/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02075588();                            /* extern */
extern M2C_UNK data_020c1c5c;

void *func_02075004(void *arg0) {
    func_02075588();
    M2C_FIELD(arg0, s32 *, 0x70)   = 0;
    M2C_FIELD(arg0, s32 *, 0x6C)   = (s32) M2C_FIELD(arg0, s32 *, 0x70);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c1c5c;
    return arg0;
}
