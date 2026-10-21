/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020595f8(void *);                      /* extern */
M2C_UNK func_0205963c(void *);                      /* extern */
M2C_UNK func_0207fe44(void *);                      /* extern */
extern M2C_UNK data_020c0d38;
extern M2C_UNK data_020c0d50;

void *func_020594c4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c0d38;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_020c0d50;
    func_020595f8(arg0 + 4);
    func_0205963c(arg0);
    func_0207fe44(arg0);
    return arg0;
}
