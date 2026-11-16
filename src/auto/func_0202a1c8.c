/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 lbl_020a4390();                               /* extern */
M2C_UNK func_02078f70();                    /* extern */
M2C_UNK func_020a324c();                /* extern */
s32 func_020a4218();                                /* extern */
M2C_UNK func_020a47b0();                /* extern */
extern s8 data_020e36a4;
extern void *data_020e36c8;

void func_0202a1c8(s32 arg0) {
    if (data_020e36a4 == 0) {
        return;
    }
    if (arg0 > 0) {
        func_020a324c(0x3F000000, lbl_020a4390(arg0 << 0xC));
    } else {
        func_020a47b0(lbl_020a4390(arg0 << 0xC), 0x3F000000);
    }
    func_02078f70(M2C_FIELD(data_020e36c8, s32 *, 0xC), func_020a4218());
}
