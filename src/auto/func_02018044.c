/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK **data_020df0b4;
extern M2C_UNK func_02017ccc;

void func_02018044(M2C_UNK *arg0) {
    if (arg0 == NULL) {
        *data_020df0b4 = &func_02017ccc;
        return;
    }
    *data_020df0b4 = arg0;
}
