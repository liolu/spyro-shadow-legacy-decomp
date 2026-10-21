/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020591c0();                            /* extern */
extern M2C_UNK data_020bfcd8;

void *func_0204a764(void *arg0) {
    func_020591c0();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bfcd8;
    M2C_FIELD(arg0, s16 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    return arg0;
}
