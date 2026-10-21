/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205b8c8();                            /* extern */
M2C_UNK func_0205efe0();                         /* extern */
extern M2C_UNK data_020c10fc;
extern M2C_UNK data_020c1110;

void *func_0205f250(void *arg0) {
    func_0205b8c8();
    func_0205efe0(arg0 + 0x90);
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020c10fc;
    M2C_FIELD(arg0, M2C_UNK **, 0x90) = &data_020c1110;
    return arg0;
}
