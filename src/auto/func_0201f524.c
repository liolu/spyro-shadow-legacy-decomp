/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02019280();                            /* extern */
M2C_UNK func_0201f4a4();                            /* extern */
M2C_UNK func_0201fea0(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0201ff00(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0201ff60(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020e22c4;

void func_0201f524(s32 arg0) {
    func_0201ff60(&data_020e22c4, 2);
    func_0201ff00(&data_020e22c4, arg0);
    func_0201fea0(&data_020e22c4, arg0 + 0x28);
    func_0201f4a4();
    func_02019280();
}
