/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020592a8();                            /* extern */
extern M2C_UNK data_020bfc68;

void *func_02049ca0(void *arg0) {
    func_020592a8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bfc68;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    return arg0;
}
