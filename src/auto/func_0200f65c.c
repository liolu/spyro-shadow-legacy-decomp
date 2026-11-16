/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02019640(u8);                          /* extern */
M2C_UNK func_02019660(u8);                          /* extern */
M2C_UNK func_02019b08(s32, M2C_UNK);                /* extern */
M2C_UNK func_02019b7c(M2C_UNK);                     /* extern */
s32 func_02019b98(M2C_UNK);                         /* extern */
M2C_UNK func_0201b770(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern s16 data_020deebc;

s32 func_0200f65c(void *arg0) {
    s32 temp_r4;

    data_020deebc = M2C_FIELD(arg0, s16 *, 4);
    func_0201b770(2, 0x3F, 1);
    func_02019b08(0x1E, 0);
    temp_r4 = func_02019b98(1);
    func_02019b7c(1);
    if (temp_r4 == 0x24) {
        func_02019b08(0x14, 1);
    } else {
        func_02019b08(temp_r4, 1);
    }
    func_02019660((u8) M2C_FIELD(arg0, u8 *, 4));
    func_02019640(M2C_FIELD(arg0, u8 *, 7));
    return 1;
}
