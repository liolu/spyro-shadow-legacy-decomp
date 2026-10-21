/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020062d0();                            /* extern */
M2C_UNK func_02053460(s32, s32);                    /* extern */
s32 func_020822c0();                                /* extern */

void func_0203fc78(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x44);
    func_020062d0();
    func_02053460(temp_r4, func_020822c0());
}
