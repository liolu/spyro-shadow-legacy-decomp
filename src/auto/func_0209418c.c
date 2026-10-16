/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02091cc0(M2C_UNK);                     /* extern */
M2C_UNK func_02091e50(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_02094038(M2C_UNK);                     /* extern */
extern u16 data_020fb1dc;
extern s32 data_020fb1e0;
extern M2C_UNK data_020fb1e4;
extern M2C_UNK func_02094104;

void func_0209418c(void) {
    if (data_020fb1dc != 0) {
        return;
    }
    data_020fb1dc = 1;
    func_02094038(0);
    M2C_FIELD(&data_020fb1e4, s32 *, 0) = 0;
    M2C_FIELD(&data_020fb1e4, s32 *, 4) = 0;
    *(s16 *) 0x04000102                 = 0;
    *(s16 *) 0x04000100                 = 0;
    *(s16 *) 0x04000102                 = 0xC1;
    func_02091e50(8, &func_02094104);
    func_02091cc0(8);
    data_020fb1e0 = 0;
}
