/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207ff14(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_020c04b8;

void *func_020515c0(void *arg0) {
    if (M2C_FIELD(arg0, s8 *, 0x18) != 0) {
        func_0207ff14(M2C_FIELD(arg0, s32 *, 0), &data_020c04b8, 0x22);
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    return arg0;
}
