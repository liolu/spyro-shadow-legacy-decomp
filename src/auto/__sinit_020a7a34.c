/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02072134(M2C_UNK *);                   /* extern */
M2C_UNK func_020a6cf0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020daa84;
extern M2C_UNK data_020daa90;
extern M2C_UNK data_020daa9c;
extern M2C_UNK data_020daaa8;
extern M2C_UNK data_020daab4;
extern M2C_UNK data_020dab04;
extern M2C_UNK data_020dab7c;
extern M2C_UNK data_020dabf4;
extern M2C_UNK data_020dac6c;
extern M2C_UNK data_020dace4;
extern M2C_UNK func_02072130;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020a7a34(void) {
    func_02072134(&data_020dab7c);
    func_020a6cf0(&data_020dab7c, &func_02072130, &data_020daa90);
    func_02072134(&data_020dabf4);
    func_020a6cf0(&data_020dabf4, &func_02072130, &data_020daa9c);
    func_02072134(&data_020dac6c);
    func_020a6cf0(&data_020dac6c, &func_02072130, &data_020daaa8);
    func_02072134(&data_020dace4);
    func_020a6cf0(&data_020dace4, &func_02072130, &data_020daab4);
    func_02072134(&data_020dab04);
    func_020a6cf0(&data_020dab04, &func_02072130, &data_020daa84);
}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020a7a34_ctor)(void) = __sinit_020a7a34;
