/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020506c0(void *);                      /* extern */
M2C_UNK func_0205b784(void *);                      /* extern */
M2C_UNK func_0205bfe0(void *);                      /* extern */
M2C_UNK func_0205eeac(void *);                      /* extern */
extern M2C_UNK data_020c10fc;
extern M2C_UNK data_020c1110;
extern M2C_UNK data_020c17f8;

void *func_02071968(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)     = &data_020c17f8;
    M2C_FIELD(arg0, M2C_UNK **, 0x114) = &data_020c10fc;
    M2C_FIELD(arg0, M2C_UNK **, 0x1A4) = &data_020c1110;
    func_0205eeac(arg0 + 0x1A4);
    func_0205b784(arg0 + 0x114);
    func_0205bfe0(arg0 + 0x68);
    func_020506c0(arg0);
    return arg0;
}
