/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204b90c();                            /* extern */
extern M2C_UNK data_020bff5c;
extern M2C_UNK data_020bff80;

void *func_0204c2b0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020bff5c;
    M2C_FIELD(arg0, M2C_UNK **, 0x90) = &data_020bff80;
    func_0204b90c(arg0);
    return arg0;
}
