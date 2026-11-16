/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020a6cf0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020a6dcc(M2C_UNK *, M2C_UNK, s32, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020df58c;
extern M2C_UNK data_020df598;
extern M2C_UNK func_0201a93c;
extern M2C_UNK func_0201a964;
extern M2C_UNK func_0201a99c;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020a7c8c(void) {
    func_020a6dcc(&data_020df598, 2, 0x13EC, &func_0201a99c, &func_0201a964);
    func_020a6cf0(0, &func_0201a93c, &data_020df58c);
}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020a7c8c_ctor)(void) = __sinit_020a7c8c;
