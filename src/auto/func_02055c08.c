/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02006acc(void *);                      /* extern */
M2C_UNK func_02055990();                            /* extern */
M2C_UNK func_0205924c(void *);                      /* extern */
M2C_UNK func_0205b784(void *);                      /* extern */
M2C_UNK func_0207fe44(void *);                      /* extern */
extern M2C_UNK data_020bf760;
extern M2C_UNK data_020c09f4;
extern M2C_UNK data_020c0a14;
extern M2C_UNK data_020c0a38;

void *func_02055c08(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020c09f4;
    M2C_FIELD(arg0, M2C_UNK **, 0x90) = &data_020c0a14;
    func_02055990(arg0);
    func_02006acc(arg0 + 0xE4);
    func_02006acc(arg0 + 0xD8);
    M2C_FIELD(arg0, M2C_UNK **, 0xB0) = &data_020c0a38;
    M2C_FIELD(arg0, M2C_UNK **, 0xB0) = &data_020bf760;
    func_0205924c(arg0 + 0x90);
    func_0205b784(arg0);
    func_0207fe44(arg0);
    return arg0;
}
