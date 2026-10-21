/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205f41c(void *, M2C_UNK);             /* extern */
M2C_UNK func_0205f45c(void *);                      /* extern */
M2C_UNK func_0205f4a0(void *, s32);                 /* extern */

void func_0205fadc(void *arg0, M2C_UNK arg1, s32 arg2) {
    func_0205f4a0(arg0, arg2);
    func_0205f45c(arg0 + 0x20);
    func_0205f41c(arg0 + 0x20, arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
}
