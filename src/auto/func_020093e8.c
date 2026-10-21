/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020206c8();                            /* extern */
s32 func_02091f00();                                /* extern */
M2C_UNK func_0209c11c(u16);                         /* extern */
extern s32 data_020da1dc;

void func_020093e8(void) {
    s32 temp_r0;

    func_020206c8();
    temp_r0       = func_02091f00();
    data_020da1dc = temp_r0;
    func_0209c11c((u16) temp_r0);
}
