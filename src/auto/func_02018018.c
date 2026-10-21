/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_020df0b4;
extern M2C_UNK func_02017ccc;

void func_02018018(M2C_UNK *arg0) {
    if (arg0 == NULL) {
        M2C_FIELD(data_020df0b4, M2C_UNK **, 8) = &func_02017ccc;
        return;
    }
    M2C_FIELD(data_020df0b4, M2C_UNK **, 8) = arg0;
}
