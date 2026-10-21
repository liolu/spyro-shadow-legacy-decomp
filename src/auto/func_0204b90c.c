/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008130(s8, s16);                     /* extern */
M2C_UNK func_020506c0(void *);                      /* extern */
M2C_UNK func_0205b784(void *);                      /* extern */
M2C_UNK func_0205eef0(void *);                      /* extern */
extern M2C_UNK data_020bf760;
extern M2C_UNK data_020bfdf4;
extern M2C_UNK data_020bfe18;
extern M2C_UNK data_020bfe64;

void *func_0204b90c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020bfdf4;
    M2C_FIELD(arg0, M2C_UNK **, 0x90) = &data_020bfe18;
    func_02008130(M2C_FIELD(arg0, s8 *, 0xD2), M2C_FIELD(arg0, s16 *, 0xD0));
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &data_020bfe64;
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &data_020bf760;
    func_0205eef0(arg0 + 0xDC);
    func_020506c0(arg0 + 0x90);
    func_0205b784(arg0);
    return arg0;
}
