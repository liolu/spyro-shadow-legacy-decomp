/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_02097eb8(M2C_UNK);                     /* extern */
extern M2C_UNK data_020dad64;
extern M2C_UNK data_020ddd64;
extern u8 data_020ddf70;

void func_02012aa4(void) {
    s32 var_lr;
    u8 *var_ip;

    func_02097eb8(4);
    var_ip = &data_020ddf70;
    var_lr = 0;
    do {
        *((M2C_UNK *) ((s8 *) &data_020dad64 + (var_lr * 4))) = 0;
        var_lr += 1;
        *var_ip &= ~0x7F;
        *var_ip &= ~0x80;
        var_ip += 1;
    } while (var_lr < 0xC83);
    M2C_FIELD(&data_020ddd64, s32 *, 0xE90) = 0;
}
