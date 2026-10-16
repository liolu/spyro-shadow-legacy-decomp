/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0202d028();                            /* extern */
M2C_UNK func_0207fe44(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020c1e4c;
extern M2C_UNK data_020c2904;

M2C_UNK **func_0207ddfc(M2C_UNK **arg0) {
    *arg0 = &data_020c2904;
    *arg0 = &data_020c1e4c;
    func_0202d028(arg0);
    func_0207fe44(arg0);
    return arg0;
}
