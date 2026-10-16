/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02077180();                            /* extern */
extern M2C_UNK data_020c1da0;

void *func_02076c90(void *arg0) {
    func_02077180();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c1da0;
    M2C_FIELD(arg0, s32 *, 0x58)   = 0;
    return arg0;
}
