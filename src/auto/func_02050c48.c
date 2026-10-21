/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02050d38(void *);                      /* extern */
M2C_UNK func_02050d7c(void *);                      /* extern */
extern M2C_UNK data_020c0448;
extern M2C_UNK data_020c0460;

void *func_02050c48(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c0448;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_020c0460;
    func_02050d38(arg0 + 4);
    func_02050d7c(arg0);
    return arg0;
}
