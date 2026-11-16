/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020a6cf0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020f6f4c;
extern M2C_UNK data_020f6f58;
extern M2C_UNK func_0208329c;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020aabcc(void) {
    M2C_FIELD(&data_020f6f58, s32 *, 4)    = 0;
    M2C_FIELD(&data_020f6f58, s32 *, 8)    = 0;
    M2C_FIELD(&data_020f6f58, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_020f6f58, s32 *, 0x10) = 0;
    func_020a6cf0(&data_020f6f58, &func_0208329c, &data_020f6f4c);
}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020aabcc_ctor)(void) = __sinit_020aabcc;
