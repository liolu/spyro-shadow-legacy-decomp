/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02011f34();                                /* extern */
s32 func_02018208();                                /* extern */
M2C_UNK func_02018218();                            /* extern */
M2C_UNK func_02019260();                            /* extern */
M2C_UNK func_02020194();                            /* extern */
M2C_UNK func_02020390();                            /* extern */
M2C_UNK func_0204378c(s32);                         /* extern */
s32 func_020437fc();                                /* extern */
M2C_UNK func_02072f2c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02082e10(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02082f64();                            /* extern */
extern s8 data_020bd638;
extern s32 data_020df0fc;
extern s8 data_020df120;

void func_02018460(void) {
    data_020df120 = 1;
    data_020bd638 = 1;
    func_02020194();
    if (func_020437fc() != 0) {
        func_02072f2c(func_02011f34(), 0);
        func_0204378c(data_020df0fc);
        func_02020390();
    }
    func_02019260();
    func_02018218();
    func_02082e10(func_02018208(), 0, 0);
    func_02018208();
    func_02082f64();
}
