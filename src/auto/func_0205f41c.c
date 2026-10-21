/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205f2bc(void *, M2C_UNK);             /* extern */
s32 func_0205f31c();                                /* extern */
M2C_UNK func_0205f45c(void *);                      /* extern */

void func_0205f41c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    if (func_0205f31c() == 0) {
        func_0205f45c(arg0);
        return;
    }
    func_0205f2bc(arg0, 1);
}
