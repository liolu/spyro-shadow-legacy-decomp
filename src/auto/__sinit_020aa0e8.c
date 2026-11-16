/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02080b68(M2C_UNK *);                   /* extern */
M2C_UNK func_020a6cf0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020f5364;
extern M2C_UNK data_020f5370;
extern M2C_UNK func_02080b48;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020aa0e8(void) {
    func_02080b68(&data_020f5370);
    func_020a6cf0(&data_020f5370, &func_02080b48, &data_020f5364);
}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020aa0e8_ctor)(void) = __sinit_020aa0e8;
