/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020a6cf0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020a6dcc(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020da1e0;
extern M2C_UNK data_020da1ec;
extern M2C_UNK func_0200b240;
extern M2C_UNK func_0200b264;
extern M2C_UNK func_0200b294;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020a79dc(void) {
    func_020a6dcc(&data_020da1ec, 2, 0x1B8, &func_0200b294, &func_0200b264);
    func_020a6cf0(0, &func_0200b240, &data_020da1e0);
}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020a79dc_ctor)(void) = __sinit_020a79dc;
