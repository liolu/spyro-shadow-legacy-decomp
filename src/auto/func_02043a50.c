/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02043844();                            /* extern */
M2C_UNK func_020506c0(void *);                      /* extern */
M2C_UNK func_0207fe44(void *);                      /* extern */
extern M2C_UNK data_020bf6d0;
extern M2C_UNK data_020bf724;
extern M2C_UNK data_020bf760;

void *func_02043a50(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf6d0;
    func_02043844();
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_020bf724;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_020bf760;
    func_020506c0(arg0);
    func_0207fe44(arg0);
    return arg0;
}
