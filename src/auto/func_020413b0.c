/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02040f6c(void *);                      /* extern */
M2C_UNK func_02041408(void *, void *);              /* extern */
extern M2C_UNK data_020bf170;

void *func_020413b0(void *arg0) {
    func_02041408(arg0, arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf170;
    M2C_FIELD(arg0, s32 *, 4)      = -1;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    func_02040f6c(arg0);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return arg0;
}
