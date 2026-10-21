/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02019640(u8);                          /* extern */
M2C_UNK func_02019660(u32);                         /* extern */
M2C_UNK func_02019b08(s32, M2C_UNK);                /* extern */
M2C_UNK func_0201b770(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
void *func_020436f0(s32);                           /* extern */
extern s32 data_020bf6a0;
extern s32 data_020e6c6c;

void func_02037470(void) {
    func_0201b770(2, 0x3F, 1);
    func_02019b08(0x1E, 0);
    func_02019b08(data_020e6c6c, 1);
    func_02019660((u32) (M2C_FIELD(func_020436f0(data_020bf6a0), u8 *, 0xF) << 0x18) >> 0x19);
    func_02019640(M2C_FIELD(func_020436f0(data_020bf6a0), u8 *, 0x10));
}
