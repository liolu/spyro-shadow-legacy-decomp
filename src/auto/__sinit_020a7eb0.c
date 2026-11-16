/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020a6cf0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020a6dcc(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020e37dc;
extern M2C_UNK data_020e37e8;
extern M2C_UNK func_0202e408;
extern M2C_UNK func_0202e42c;
extern M2C_UNK func_0202e450;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020a7eb0(void) {
    func_020a6dcc(&data_020e37e8, 4, 0x24, &func_0202e450, &func_0202e42c);
    func_020a6cf0(0, &func_0202e408, &data_020e37dc);
}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020a7eb0_ctor)(void) = __sinit_020a7eb0;
