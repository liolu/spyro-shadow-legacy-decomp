/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02019b40(s32);                         /* extern */
M2C_UNK func_0201b770(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0203e3d4();                            /* extern */
extern s32 data_020df0fc;

void func_0203e878(void) {
    func_0201b770(1, 0x3F, 1);
    func_02019b40(data_020df0fc);
    func_0203e3d4();
}
