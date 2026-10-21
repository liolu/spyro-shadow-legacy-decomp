/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02019b08(s32, s32);                    /* extern */
M2C_UNK func_0201b770(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern s32 data_020df0fc;
extern s8 data_020e8820;
extern s32 data_020e882c;

void func_0203ba48(void) {
    data_020e8820 = 1;
    func_0201b770(1, 0x3F, 1);
    func_02019b08(data_020e882c, data_020df0fc);
    data_020e882c = 0;
}
