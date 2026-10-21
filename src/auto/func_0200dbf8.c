/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02017050(M2C_UNK *);                   /* extern */
M2C_UNK func_02019640(u8);                          /* extern */
M2C_UNK func_02019660(u8);                          /* extern */
M2C_UNK func_02019b08(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0201b770(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_020d9f9c;
extern M2C_UNK data_020deebc;

s32 func_0200dbf8(void *arg0) {
    func_02017050(&data_020deebc);
    func_0201b770(2, 0x3F, 1);
    func_02019b08(0x1E, 0);
    if (((u32) (M2C_FIELD(&data_020deebc, s32 *, 0x20) << 0x1A) >> 0x1F) == 1) {
        func_02019b08(0xC, 1);
    } else {
        func_02019b08(0x14, 1);
    }
    func_02019660(M2C_FIELD(arg0, u8 *, 4));
    func_02019640(M2C_FIELD(arg0, u8 *, 5));
    M2C_FIELD(&data_020d9f9c, u8 *, 0x184) = (u8) M2C_FIELD(arg0, u8 *, 6);
    return 1;
}
