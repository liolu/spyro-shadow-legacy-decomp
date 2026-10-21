/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02082170(void *);                      /* extern */
M2C_UNK func_020821b4(void *);                      /* extern */
extern M2C_UNK data_020c2ec8;
extern M2C_UNK data_020c2edc;

void *func_02082084(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c2ec8;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_020c2edc;
    func_02082170(arg0 + 4);
    func_020821b4(arg0);
    return arg0;
}
