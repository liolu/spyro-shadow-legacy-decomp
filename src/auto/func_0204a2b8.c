/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204a250();             /* extern */
M2C_UNK func_0204a764();                         /* extern */
extern M2C_UNK data_020bfc94;

void *func_0204a2b8(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bfc94;
    func_0204a764(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    func_0204a250(arg0, arg1);
    return arg0;
}
