/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004978();                            /* extern */
M2C_UNK func_020062d0();                            /* extern */
s32 func_02011f34();                                /* extern */
void **func_02019670();                             /* extern */
s32 func_02019ad0(M2C_UNK);                         /* extern */
M2C_UNK func_02072840(s32, s32);                    /* extern */
s32 func_020822c0();                                /* extern */

void func_02018950(s32 arg0) {
    s32 temp_r4;
    void **temp_r0;

    if (arg0 == 0) {
        func_020062d0();
        temp_r4 = func_020822c0();
        if (func_02019ad0(0x1E) != 0) {
            func_02072840(func_02011f34(), temp_r4);
        }
        func_02004978();
        temp_r0 = func_02019670();
        M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s32), 8)(temp_r0, temp_r4);
        return;
    }
    func_02004978();
}
