/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204b90c();                            /* extern */
extern M2C_UNK data_020bfec8;
extern M2C_UNK data_020bfeec;

void *func_0204bf40(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020bfec8;
    M2C_FIELD(arg0, M2C_UNK **, 0x90) = &data_020bfeec;
    func_0204b90c(arg0);
    return arg0;
}
