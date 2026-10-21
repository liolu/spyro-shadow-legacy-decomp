/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0204fe50(void *, s32 *, s32, void *);    /* extern */
s32 func_02080b84(void *, s32, s32);                /* extern */

void func_0204fc60(void **arg0, void *arg1, s32 *arg2) {
    void *temp_r0;

    temp_r0 = func_0204fe50(arg1, arg2, M2C_FIELD(arg1, s32 *, 4), arg1 + 4);
    if ((temp_r0 == (arg1 + 4)) || (func_02080b84(arg1 + 8, *arg2, M2C_FIELD(temp_r0, s32 *, 0xC)) != 0)) {
        *arg0 = arg1 + 4;
        return;
    }
    *arg0 = temp_r0;
}
