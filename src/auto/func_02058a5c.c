/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205b728(void *);                      /* extern */
M2C_UNK func_0205bf90(void *);                      /* extern */
M2C_UNK func_02071b84(void *);                      /* extern */
M2C_UNK func_0207fe44(void *);                      /* extern */
M2C_UNK func_020a6d58(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_020c0c64;
extern M2C_UNK data_020c0c8c;
extern M2C_UNK func_0205bd40;

void *func_02058a5c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020c0c64;
    M2C_FIELD(arg0, M2C_UNK **, 0xAC) = &data_020c0c8c;
    func_02071b84(arg0 + 0x3BD0);
    func_020a6d58(arg0 + 0xB4, 0x3C, 0xFC, &func_0205bd40);
    func_0205b728(arg0 + 0xAC);
    func_0205bf90(arg0);
    func_0207fe44(arg0);
    return arg0;
}
