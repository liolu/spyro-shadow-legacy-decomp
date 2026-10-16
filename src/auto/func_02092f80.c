/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02092de4();                            /* extern */
s32 func_02094304();                                /* extern */
M2C_UNK func_02094318(s32);                         /* extern */
extern void **data_020faef8;

void func_02092f80(u16 *arg0) {
    s32 temp_r4;
    void *temp_r2;

    temp_r4 = func_02094304();
    temp_r2 = *data_020faef8;
    if (arg0 != NULL) {
        *arg0 |= (u16) (1 << M2C_FIELD(temp_r2, s32 *, 0x6C));
    }
    M2C_FIELD(temp_r2, s32 *, 0x64) = 0;
    func_02092de4();
    func_02094318(temp_r4);
}
