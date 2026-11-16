/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020a6cf0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020a6dcc(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020e718c;
extern M2C_UNK data_020e7198;
extern M2C_UNK func_02038b30;
extern M2C_UNK func_02072130;
extern M2C_UNK func_02072134;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020a8b88(void) {
    func_020a6dcc(&data_020e7198, 0xF, 0x78, &func_02072134, &func_02072130);
    func_020a6cf0(0, &func_02038b30, &data_020e718c);
}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020a8b88_ctor)(void) = __sinit_020a8b88;
