/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204e680();                      /* extern */
M2C_UNK func_02059dd8();                         /* extern */
M2C_UNK func_0205ee90();             /* extern */
extern M2C_UNK data_020c10a4;

void *func_0205ef8c(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c10a4;
    func_02059dd8(arg0 + 0x58);
    func_0204e680(arg0 + 0x6C);
    M2C_FIELD(arg0, s8 *, 0x84) = 0;
    M2C_FIELD(arg0, s8 *, 0x85) = 0;
    func_0205ee90(arg0, arg1);
    return arg0;
}
