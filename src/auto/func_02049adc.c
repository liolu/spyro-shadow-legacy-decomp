/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0205924c(M2C_UNK **);                  /* extern */
M2C_UNK func_020499cc();                            /* extern */
M2C_UNK func_0207fe44(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020bfc24;

M2C_UNK **func_02049adc(M2C_UNK **arg0) {
    *arg0 = &data_020bfc24;
    func_020499cc();
    func_0205924c(arg0);
    func_0207fe44(arg0);
    return arg0;
}
