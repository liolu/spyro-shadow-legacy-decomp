/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207693c();                            /* extern */
extern M2C_UNK data_020c1b34;
extern M2C_UNK data_020c1b44;

void *func_020744a4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020c1b34;
    M2C_FIELD(arg0, M2C_UNK **, 0x60) = &data_020c1b44;
    func_0207693c(arg0);
    return arg0;
}
