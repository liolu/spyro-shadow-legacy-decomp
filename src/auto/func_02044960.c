/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008130(s8, s16);                     /* extern */
M2C_UNK func_020506c0(void *);                      /* extern */
extern M2C_UNK data_020bf7f4;

void *func_02044960(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf7f4;
    func_02008130(M2C_FIELD(arg0, s8 *, 0x42), M2C_FIELD(arg0, s16 *, 0x40));
    func_020506c0(arg0);
    return arg0;
}
