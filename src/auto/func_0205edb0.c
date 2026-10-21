/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02059bbc();       /* extern */
M2C_UNK func_02086048();              /* extern */

void func_0205edb0(void *arg0, M2C_UNK arg1) {
    void *temp_r2;

    func_02059bbc(arg0 + 0x58, arg1, 0);
    temp_r2 = M2C_FIELD(arg0, void **, 0x64);
    func_02086048(arg0 + 4, temp_r2 + M2C_FIELD((temp_r2 + M2C_FIELD(temp_r2, u16 *, 0xE)), s32 *, 0xC));
}
