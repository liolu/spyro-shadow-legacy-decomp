/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02017998(M2C_UNK *);                   /* extern */
M2C_UNK func_0205b5c0(M2C_UNK *);                   /* extern */
M2C_UNK func_020a6cf0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020dedd8;
extern M2C_UNK data_020dede4;
extern M2C_UNK data_020dedf0;
extern M2C_UNK data_020deebc;
extern M2C_UNK data_020def18;
extern M2C_UNK data_020def74;
extern M2C_UNK func_02017b58;
extern M2C_UNK func_0205b540;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020a7af0(void) {
    func_02017998(&data_020deebc);
    func_020a6cf0(&data_020deebc, &func_02017b58, &data_020dedd8);
    func_02017998(&data_020def18);
    func_020a6cf0(&data_020def18, &func_02017b58, &data_020dede4);
    func_0205b5c0(&data_020def74);
    func_020a6cf0(&data_020def74, &func_0205b540, &data_020dedf0);
}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020a7af0_ctor)(void) = __sinit_020a7af0;
