/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02072134(M2C_UNK *);                   /* extern */
M2C_UNK func_020a6cf0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020a6dcc(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK (*)(M2C_UNK *), M2C_UNK *); /* extern */
extern M2C_UNK data_020eb75c;
extern M2C_UNK data_020eb768;
extern M2C_UNK data_020eb774;
extern M2C_UNK data_020eb780;
extern M2C_UNK data_020eb7f8;
extern M2C_UNK data_020eb870;
extern M2C_UNK func_0203ec7c;
extern M2C_UNK func_02072130;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020a9e58(void) {
    func_02072134(&data_020eb780);
    func_020a6cf0(&data_020eb780, &func_02072130, &data_020eb75c);
    func_02072134(&data_020eb7f8);
    func_020a6cf0(&data_020eb7f8, &func_02072130, &data_020eb768);
    func_020a6dcc(&data_020eb870, 6, 0x78, func_02072134, &func_02072130);
    func_020a6cf0(NULL, &func_0203ec7c, &data_020eb774);
}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020a9e58_ctor)(void) = __sinit_020a9e58;
