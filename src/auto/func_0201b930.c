/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004490(M2C_UNK *);                   /* extern */
M2C_UNK func_020803d0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
u32 func_020979a8(M2C_UNK, M2C_UNK, u32);           /* extern */
extern M2C_UNK data_020bdcc8;

s32 func_0201b930(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, u32 arg3) {
    func_020803d0(arg0, arg2, 0);
    if (func_020979a8(arg0, arg1, arg3) >= arg3) {
        return 1;
    }
    func_02004490(&data_020bdcc8);
    return 0;
}
