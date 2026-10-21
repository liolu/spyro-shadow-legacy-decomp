/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207693c();                            /* extern */
extern M2C_UNK data_020c1b8c;
extern M2C_UNK data_020c1b9c;

void *func_0207417c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020c1b8c;
    M2C_FIELD(arg0, M2C_UNK **, 0x60) = &data_020c1b9c;
    func_0207693c(arg0);
    return arg0;
}
