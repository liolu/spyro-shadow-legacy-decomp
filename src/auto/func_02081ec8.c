/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081e38(void *);                      /* extern */
M2C_UNK func_02081f04(void *, void *);              /* extern */
extern M2C_UNK data_020c2d58;

void *func_02081ec8(void *arg0) {
    func_02081f04(arg0, arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c2d58;
    M2C_FIELD(arg0, s8 *, 0x70)    = 0;
    M2C_FIELD(arg0, s8 *, 4)       = 0;
    func_02081e38(arg0);
    return arg0;
}
