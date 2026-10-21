/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003cbc(s32, M2C_UNK);                /* extern */
M2C_UNK func_0201b770(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0201b7f0(s32);                         /* extern */
M2C_UNK func_02020440(M2C_UNK);                     /* extern */
M2C_UNK func_0203bf6c(M2C_UNK);                     /* extern */
extern s32 data_020df0fc;
extern s32 data_020e8830;
extern M2C_UNK data_020e8ab0;
extern M2C_UNK data_020e8b28;
extern M2C_UNK data_020e8ba0;

void func_0203b91c(void) {
    func_02020440(0x44);
    if (M2C_FIELD(&data_020e8ba0, s32 *, 0x10) != 0) {
        func_02003cbc(M2C_FIELD(&data_020e8ba0, s32 *, 0x10), 1);
    }
    if (M2C_FIELD(&data_020e8b28, s32 *, 0x10) != 0) {
        func_02003cbc(M2C_FIELD(&data_020e8b28, s32 *, 0x10), 0);
    }
    func_0201b770(1, 0x3F, 1);
    func_0201b7f0(data_020df0fc);
    data_020e8830 = 0xC;
    func_0203bf6c(2);
    if (M2C_FIELD(&data_020e8ab0, s32 *, 0x10) == 0) {
        return;
    }
    func_02003cbc(M2C_FIELD(&data_020e8ab0, s32 *, 0x10), 0);
}
