/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02051370(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020513d0(M2C_UNK, u8 *, M2C_UNK);      /* extern */

void func_020090f8(void *arg0, M2C_UNK arg1) {
    u8 sp0;
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 8);
    switch (temp_r2) {                              /* irregular */
        case 5:
            func_02051370(arg1, 0);
            return;
        case 14:
            sp0 = M2C_FIELD(arg0, u8 *, 0x10);
            func_020513d0(arg1, &sp0, 1);
            return;
        case 17:
            func_02051370(arg1, 0);
            return;
    }
}
