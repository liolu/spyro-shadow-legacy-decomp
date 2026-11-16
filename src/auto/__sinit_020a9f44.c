/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020515fc(M2C_UNK *);                   /* extern */
M2C_UNK func_020a6cf0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020ebbac;
extern M2C_UNK data_020ebbc8;
extern M2C_UNK func_020515c0;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020a9f44(void) {
    func_020515fc(&data_020ebbc8);
    func_020a6cf0(&data_020ebbc8, &func_020515c0, &data_020ebbac);
}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020a9f44_ctor)(void) = __sinit_020a9f44;
