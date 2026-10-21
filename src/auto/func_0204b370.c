/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201b650(s32);                             /* extern */
M2C_UNK func_02020440(M2C_UNK);                     /* extern */
extern s32 data_020df0fc;

void func_0204b370(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x180) = 2;
    if (func_0201b650(data_020df0fc) != 0) {
        return;
    }
    func_02020440(0x56);
}
