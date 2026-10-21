/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020062d0();                            /* extern */
M2C_UNK func_0200af08(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020822c0();                                /* extern */
extern s32 data_020bea84;
extern s32 data_020e8818;
extern s32 data_020e881c;

void func_0203a5b8(void) {
    s32 temp_r0;

    func_020062d0();
    temp_r0       = data_020e881c - func_020822c0();
    data_020e881c = temp_r0;
    if (temp_r0 > 0) {
        return;
    }
    data_020e8818 = 0x266;
    func_0200af08(0, 0);
    data_020bea84 = 6;
}
