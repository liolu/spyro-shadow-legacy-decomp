/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02019640();                            /* extern */
M2C_UNK func_02019660();                            /* extern */
M2C_UNK func_02019b08(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0201b770(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020436d0();                            /* extern */
M2C_UNK func_020436e0();                            /* extern */
extern M2C_UNK data_020deebc;

s32 func_0200db7c(void) {
    func_0201b770(2, 0x3F, 1);
    func_02019b08(0x1E, 0);
    if (((u32) (M2C_FIELD(&data_020deebc, s32 *, 0x20) << 0x1A) >> 0x1F) == 1) {
        func_02019b08(0xC, 1);
    } else {
        func_02019b08(0x14, 1);
    }
    func_020436e0();
    func_02019660();
    func_020436d0();
    func_02019640();
    return 1;
}
