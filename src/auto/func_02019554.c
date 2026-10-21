/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02019640();                            /* extern */
M2C_UNK func_02019660();                            /* extern */
M2C_UNK func_02019b08(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0201b770(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020428ac();                            /* extern */
M2C_UNK func_020436d0();                            /* extern */
M2C_UNK func_020436e0();                            /* extern */
void *func_020436f0(s32);                           /* extern */
extern s32 data_020bf6a0;
extern M2C_UNK data_020deebc;
extern s8 data_020df118;

void func_02019554(void) {
    if (data_020df118 != 0) {
        return;
    }
    func_0201b770(2, 0x3F, 1);
    func_02019b08(0x1E, 0);
    if (((u32) (M2C_FIELD(&data_020deebc, s32 *, 0x20) << 0x1A) >> 0x1F) == 1) {
        func_02019b08(0xC, 1);
    } else {
        func_02019b08(0x14, 1);
    }
    if (((u32) (M2C_FIELD(func_020436f0(data_020bf6a0), u8 *, 0xF) << 0x18) >> 0x19) == 0x19) {
        func_020436e0();
        func_02019660();
        func_020436d0();
        func_02019640();
    } else {
        func_020428ac();
    }
    data_020df118 = 1;
}
