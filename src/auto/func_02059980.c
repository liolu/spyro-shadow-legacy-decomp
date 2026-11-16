/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 lbl_020a4390();                               /* extern */
M2C_UNK func_020a324c();                /* extern */
s32 func_020a4218();                                /* extern */
M2C_UNK func_020a47b0();                /* extern */
extern s32 data_020c3b28;

void func_02059980(void *arg0, s32 arg1) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    temp_r0                      = M2C_FIELD((data_020c3b28 + (M2C_FIELD(arg0, s32 *, 0x10) * 0x10)), s32 *, 4);
    if (temp_r0 > 0) {
        func_020a324c(0x3F000000, lbl_020a4390(temp_r0 << 0xC));
    } else {
        func_020a47b0(lbl_020a4390(temp_r0 << 0xC), 0x3F000000);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = func_020a4218();
    M2C_FIELD(arg0, s8 *, 8)    = 0;
}
