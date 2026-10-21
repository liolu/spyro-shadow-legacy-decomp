/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204f964(void *);                      /* extern */
M2C_UNK func_0205359c();                            /* extern */
M2C_UNK func_0205b728(void *);                      /* extern */
M2C_UNK func_0205b784(void *);                      /* extern */
extern M2C_UNK data_020bf760;
extern M2C_UNK data_020c0728;
extern M2C_UNK data_020c0740;
extern M2C_UNK data_020c07ac;

void *func_020537cc(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020c0728;
    M2C_FIELD(arg0, M2C_UNK **, 0x90) = &data_020c0740;
    func_0205359c(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x190) = &data_020c07ac;
    M2C_FIELD(arg0, M2C_UNK **, 0x190) = &data_020bf760;
    func_0204f964(arg0 + 0xB0);
    func_0205b728(arg0 + 0x90);
    func_0205b784(arg0);
    return arg0;
}
