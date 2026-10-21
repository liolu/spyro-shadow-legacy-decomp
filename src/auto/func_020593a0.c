/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void **func_02059690(void *, s32);                  /* extern */
s32 func_0205969c(void *);                          /* extern */

void func_020593a0(void *arg0) {
    s32 var_r6;
    void **temp_r0;
    void *temp_r5;

    if (M2C_FIELD(arg0, s8 *, 0x14) != 0) {
        return;
    }
    var_r6                      = 0;
    M2C_FIELD(arg0, s8 *, 0x14) = 1;
    if (func_0205969c(arg0 + 4) <= 0) {
        return;
    }
    temp_r5 = arg0 + 4;
    do {
        temp_r0 = func_02059690(temp_r5, var_r6);
        M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0xC)(temp_r0, 1);
        var_r6 += 1;
    } while (var_r6 < func_0205969c(temp_r5));
}
