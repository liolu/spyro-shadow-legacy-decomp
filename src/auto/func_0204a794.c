/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02019b08(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02019b98(M2C_UNK);                         /* extern */
M2C_UNK func_0201b770(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_020ebce4;

void func_0204a794(s32 arg0, s32 arg1) {
    if ((arg1 < 4) && (arg1 > 0)) {
        ((s8 *) &data_020ebce4)[arg0] = (s8) arg1;
    } else if ((arg0 == 2) && (arg1 == 4)) {
        ((s8 *) &data_020ebce4)[arg0] = (s8) arg1;
    }
    if (func_02019b98(1) != 0x17) {
        return;
    }
    func_0201b770(1, 0x3F, 1);
    func_02019b08(0x17, 1);
}
