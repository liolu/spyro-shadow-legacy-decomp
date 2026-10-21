/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205924c(void *);                      /* extern */
M2C_UNK func_0205b784(void *);                      /* extern */
M2C_UNK func_0205b7b8(void *);                      /* extern */
M2C_UNK func_02064084();                            /* extern */
M2C_UNK func_0207fe44(void *);                      /* extern */
extern M2C_UNK data_020bf760;
extern M2C_UNK data_020c1424;
extern M2C_UNK data_020c143c;
extern M2C_UNK data_020c1488;

void *func_02064280(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020c1424;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_020c143c;
    func_02064084(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x194) = &data_020c1488;
    M2C_FIELD(arg0, M2C_UNK **, 0x194) = &data_020bf760;
    func_0205b7b8(arg0 + 0xA8);
    func_0205b784(arg0 + 0x10);
    func_0205924c(arg0);
    func_0207fe44(arg0);
    return arg0;
}
