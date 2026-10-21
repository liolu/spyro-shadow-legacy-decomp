/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02072cc8();             /* extern */
M2C_UNK func_020765a8();                      /* extern */
M2C_UNK func_02076e48();                      /* extern */
M2C_UNK func_02076eac(); /* extern */

void func_02076820(void *arg0, M2C_UNK arg1) {
    s32 temp_r1;

    func_02072cc8(arg0 + 0x34);
    func_020765a8(arg0);
    func_02072cc8(arg0 + 0xB8, arg1);
    func_02076e48(arg0 + 0x60);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0xE4);
    if (temp_r1 == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0xDC) != 0) {
        return;
    }
    func_02076eac(arg0 + 0x60, temp_r1, -1, -1, -1, 0);
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
}
