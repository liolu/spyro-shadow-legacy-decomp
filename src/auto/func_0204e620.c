/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02050f64(M2C_UNK **);                  /* extern */
M2C_UNK func_0204e5b0();                            /* extern */
M2C_UNK func_0207fe44(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020c02d8;

M2C_UNK **func_0204e620(M2C_UNK **arg0) {
    *arg0 = &data_020c02d8;
    func_0204e5b0();
    func_02050f64(arg0);
    func_0207fe44(arg0);
    return arg0;
}
