/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020499e4(void *);                      /* extern */
M2C_UNK func_020592a8();                            /* extern */
extern M2C_UNK data_020bfc24;

void *func_02049b3c(void *arg0) {
    func_020592a8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bfc24;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    func_020499e4(arg0);
    return arg0;
}
