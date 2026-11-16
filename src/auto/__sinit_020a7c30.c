/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020541ec(M2C_UNK *);                   /* extern */
M2C_UNK func_02082cec(M2C_UNK *);                   /* extern */
M2C_UNK func_020a6cf0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020df18c;
extern M2C_UNK data_020df198;
extern M2C_UNK data_020df1bc;
extern M2C_UNK data_020df2b8;
extern M2C_UNK func_020541c8;
extern M2C_UNK func_02082ce8;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020a7c30(void) {
    func_02082cec(&data_020df2b8);
    func_020a6cf0(&data_020df2b8, &func_02082ce8, &data_020df18c);
    func_020541ec(&data_020df1bc);
    func_020a6cf0(&data_020df1bc, &func_020541c8, &data_020df198);
}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020a7c30_ctor)(void) = __sinit_020a7c30;
