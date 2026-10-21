/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003cbc(s32, M2C_UNK);                /* extern */
M2C_UNK func_02019b08(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0201b770(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02020440(M2C_UNK);                     /* extern */
extern M2C_UNK data_020e8b28;
extern M2C_UNK data_020e8ba0;

void func_0203b9cc(void) {
    func_02020440(0x44);
    if (M2C_FIELD(&data_020e8ba0, s32 *, 0x10) != 0) {
        func_02003cbc(M2C_FIELD(&data_020e8ba0, s32 *, 0x10), 0);
    }
    if (M2C_FIELD(&data_020e8b28, s32 *, 0x10) != 0) {
        func_02003cbc(M2C_FIELD(&data_020e8b28, s32 *, 0x10), 1);
    }
    func_0201b770(2, 0x3F, 1);
    func_02019b08(3, 0);
    func_02019b08(8, 1);
}
