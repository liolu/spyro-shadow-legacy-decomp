/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02017b5c(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_020e2bd0;

M2C_UNK *func_02028a20(M2C_UNK arg0) {
    if (func_02017b5c(arg0, &data_020e2bd0, 0x400) == 0) {
        return &data_020e2bd0;
    }
    return NULL;
}
