/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020a6cf0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020a6dcc(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern s32 data_020b6cb4;
extern s32 data_020f62c0;
extern M2C_UNK data_020f62c4;
extern M2C_UNK data_020f62dc;
extern M2C_UNK func_020645a0;
extern M2C_UNK func_02080b48;
extern M2C_UNK func_02080b68;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020aa124(void) {
    data_020f62c0 = data_020b6cb4;
    func_020a6dcc(&data_020f62dc, 3, 0x3C, &func_02080b68, &func_02080b48);
    func_020a6cf0(0, &func_020645a0, &data_020f62c4);
}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020aa124_ctor)(void) = __sinit_020aa124;
