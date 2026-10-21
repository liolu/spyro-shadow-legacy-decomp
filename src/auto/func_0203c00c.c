/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02019b08(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02019b98(M2C_UNK);                         /* extern */
M2C_UNK func_0201b51c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern s32 data_020bebec;
extern s32 data_020e8d0c;

void func_0203c00c(s32 arg0, s32 arg1) {
    data_020e8d0c = arg1;
    if (arg0 != -1) {
        data_020bebec = arg0;
    } else {
        data_020bebec = func_02019b98(1);
    }
    func_0201b51c(0x3F, 1, 1);
    func_02019b08(0x15, 1);
}
