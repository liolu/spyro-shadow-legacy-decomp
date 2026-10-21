/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020044a0();                            /* extern */
M2C_UNK func_02076cbc(void *);                      /* extern */
extern M2C_UNK data_020c1df4;

void *func_020770c0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c1df4;
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        func_020044a0();
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    func_02076cbc(arg0);
    return arg0;
}
