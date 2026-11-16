/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020a6cf0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020a6dcc(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020e8144;
extern M2C_UNK data_020e8150;
extern M2C_UNK func_0203a1f4;
extern M2C_UNK func_0203a218;
extern M2C_UNK func_0203a21c;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020a8ea0(void) {
    func_020a6dcc(&data_020e8150, 0x18, 0x48, &func_0203a21c, &func_0203a218);
    func_020a6cf0(0, &func_0203a1f4, &data_020e8144);
}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020a8ea0_ctor)(void) = __sinit_020a8ea0;
