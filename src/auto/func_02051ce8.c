/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02052ce4(void *);                      /* extern */
M2C_UNK func_020589f8(void *);                      /* extern */
M2C_UNK func_0207fe44(void *);                      /* extern */
extern M2C_UNK data_020c0548;
extern M2C_UNK data_020c0570;

void *func_02051ce8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020c0548;
    M2C_FIELD(arg0, M2C_UNK **, 0xAC) = &data_020c0570;
    func_02052ce4(arg0 + 0x3C7C);
    func_020589f8(arg0);
    func_0207fe44(arg0);
    return arg0;
}
