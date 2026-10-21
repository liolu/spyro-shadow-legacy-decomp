/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004490(M2C_UNK *, u8, u8);           /* extern */
M2C_UNK func_02019640(u8);                          /* extern */
M2C_UNK func_02019660(u8);                          /* extern */
M2C_UNK func_02019b08(s32, M2C_UNK);                /* extern */
M2C_UNK func_02019b7c(M2C_UNK);                     /* extern */
s32 func_02019b98(M2C_UNK);                         /* extern */
M2C_UNK func_0201b770(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_020bcec0;
extern M2C_UNK data_020deebc;

s32 func_0200f6ec(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(&data_020deebc, s16 *, 0) = 0;
    func_02004490(&data_020bcec0, M2C_FIELD(arg0, u8 *, 4), M2C_FIELD(&data_020deebc, u8 *, 2));
    func_0201b770(2, 0x3F, 1);
    func_02019b08(0x1E, 0);
    temp_r4 = func_02019b98(1);
    func_02019b7c(1);
    if (temp_r4 == 0x24) {
        func_02019b08(0x14, 1);
    } else {
        func_02019b08(temp_r4, 1);
    }
    func_02019660(M2C_FIELD(arg0, u8 *, 4));
    func_02019640(M2C_FIELD(arg0, u8 *, 5));
    return 1;
}
