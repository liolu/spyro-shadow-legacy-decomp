/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020754fc(M2C_UNK *);                   /* extern */
M2C_UNK func_020a6cf0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020a6dcc(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020e5a64;
extern M2C_UNK data_020e5a70;
extern M2C_UNK data_020e5a7c;
extern M2C_UNK data_020e5a88;
extern M2C_UNK data_020e5a94;
extern M2C_UNK data_020e5aa0;
extern M2C_UNK data_020e5b0c;
extern M2C_UNK data_020e5b78;
extern M2C_UNK data_020e5be4;
extern M2C_UNK data_020e5cf4;
extern M2C_UNK func_020036c0;
extern M2C_UNK func_02003720;
extern M2C_UNK func_02034360;
extern M2C_UNK func_02034384;
extern M2C_UNK func_02074fe0;
extern M2C_UNK func_02075004;
extern M2C_UNK func_020754d8;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020a8480(void) {
    func_020a6dcc(&data_020e5be4, 0x11, 0x10, &func_02003720, &func_020036c0);
    func_020a6cf0(NULL, &func_02034384, &data_020e5a94);
    func_020754fc(&data_020e5aa0);
    func_020a6cf0(&data_020e5aa0, &func_020754d8, &data_020e5a64);
    func_020754fc(&data_020e5b0c);
    func_020a6cf0(&data_020e5b0c, &func_020754d8, &data_020e5a70);
    func_020a6dcc(&data_020e5cf4, 6, 0x7C, &func_02075004, &func_02074fe0);
    func_020a6cf0(NULL, &func_02034360, &data_020e5a7c);
    func_020754fc(&data_020e5b78);
    func_020a6cf0(&data_020e5b78, &func_020754d8, &data_020e5a88);
}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020a8480_ctor)(void) = __sinit_020a8480;
