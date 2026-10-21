/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02019640(u8);                          /* extern */
M2C_UNK func_02019660(s32);                         /* extern */
M2C_UNK func_02019b08(s32, M2C_UNK);                /* extern */
s32 func_02019b98(M2C_UNK);                         /* extern */
M2C_UNK func_0201b770(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_02077f68(void *arg0) {
    func_0201b770(2, 0x3F, 1);
    func_02019b08(0x1E, 0);
    func_02019b08(func_02019b98(1), 1);
    func_02019660(M2C_FIELD(arg0, s32 *, 0x8F8));
    func_02019640((u8) M2C_FIELD(arg0, s32 *, 0x8FC));
}
