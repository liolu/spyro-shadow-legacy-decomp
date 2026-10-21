/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008130(s8, s16);                     /* extern */
M2C_UNK func_0204d060(void *);                      /* extern */
M2C_UNK func_020506c0(void *);                      /* extern */
M2C_UNK func_0205b784(void *);                      /* extern */
extern M2C_UNK data_020bf760;
extern M2C_UNK data_020c009c;
extern M2C_UNK data_020c00bc;
extern M2C_UNK data_020c0140;

void *func_0204d400(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020c009c;
    M2C_FIELD(arg0, M2C_UNK **, 0x90) = &data_020c00bc;
    func_02008130(M2C_FIELD(arg0, s8 *, 0xD2), M2C_FIELD(arg0, s16 *, 0xD0));
    func_0204d060(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0xDC) = &data_020c0140;
    M2C_FIELD(arg0, M2C_UNK **, 0xDC) = &data_020bf760;
    func_020506c0(arg0 + 0x90);
    func_0205b784(arg0);
    return arg0;
}
