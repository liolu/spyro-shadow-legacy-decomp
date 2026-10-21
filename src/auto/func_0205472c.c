/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02050d38(void *);                      /* extern */
M2C_UNK func_02054820(void *);                      /* extern */
M2C_UNK func_0207fe44(void *);                      /* extern */
extern M2C_UNK data_020c08dc;
extern M2C_UNK data_020c08f4;

void *func_0205472c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c08dc;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_020c08f4;
    func_02050d38(arg0 + 4);
    func_02054820(arg0);
    func_0207fe44(arg0);
    return arg0;
}
