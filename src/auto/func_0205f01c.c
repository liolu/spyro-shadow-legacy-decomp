/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205b784(void *);                      /* extern */
M2C_UNK func_0205eeac(void *);                      /* extern */
extern M2C_UNK data_020c10fc;
extern M2C_UNK data_020c1110;

void *func_0205f01c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020c10fc;
    M2C_FIELD(arg0, M2C_UNK **, 0x90) = &data_020c1110;
    func_0205eeac(arg0 + 0x90);
    func_0205b784(arg0);
    return arg0;
}
