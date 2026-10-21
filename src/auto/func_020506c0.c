/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205047c();                            /* extern */
M2C_UNK func_0205924c(void *);                      /* extern */
extern M2C_UNK data_020c037c;

void *func_020506c0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c037c;
    M2C_FIELD(arg0, s32 *, 0x38)   = 0;
    func_0205047c(arg0);
    func_0205924c(arg0);
    return arg0;
}
