/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0205914c(M2C_UNK **);                  /* extern */
M2C_UNK func_0204a340();                            /* extern */
M2C_UNK func_0207fe44(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020bfcd8;

M2C_UNK **func_0204a704(M2C_UNK **arg0) {
    *arg0 = &data_020bfcd8;
    func_0204a340();
    func_0205914c(arg0);
    func_0207fe44(arg0);
    return arg0;
}
