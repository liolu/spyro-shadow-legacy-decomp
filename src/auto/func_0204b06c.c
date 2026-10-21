/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008130(s8, s16);                     /* extern */
M2C_UNK func_020506c0(void *);                      /* extern */
M2C_UNK func_0205b784(void *);                      /* extern */
M2C_UNK func_0207fe44(void *);                      /* extern */
extern M2C_UNK data_020bfd04;
extern M2C_UNK data_020bfd50;

void *func_0204b06c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020bfd04;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_020bfd50;
    func_02008130(M2C_FIELD(arg0, s8 *, 0x42), M2C_FIELD(arg0, s16 *, 0x40));
    func_0205b784(arg0 + 0x4C);
    func_020506c0(arg0);
    func_0207fe44(arg0);
    return arg0;
}
