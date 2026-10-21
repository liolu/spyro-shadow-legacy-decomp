/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02006330(void *);                      /* extern */

void func_02019784(void *arg0, u32 arg1) {
    if ((u32) M2C_FIELD(arg0, volatile u32 *, 0xC) >= arg1) {
        return;
    }
    if (arg1 <= (u32) M2C_FIELD(arg0, volatile u32 *, 0xC)) {
        return;
    }
    func_02006330(arg0 + 4);
}
