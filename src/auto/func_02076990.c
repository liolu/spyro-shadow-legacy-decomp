/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02076748(void *);                      /* extern */
M2C_UNK func_02077078(void *);                      /* extern */
extern M2C_UNK data_020c1af0;
extern M2C_UNK data_020c1d70;
extern M2C_UNK data_020c1d80;
extern M2C_UNK data_020c1d90;

void *func_02076990(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020c1d70;
    M2C_FIELD(arg0, M2C_UNK **, 0x60) = &data_020c1d80;
    M2C_FIELD(arg0, M2C_UNK **, 0x60) = &data_020c1d90;
    func_02077078(arg0 + 0x60);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c1af0;
    func_02076748(arg0);
    return arg0;
}
