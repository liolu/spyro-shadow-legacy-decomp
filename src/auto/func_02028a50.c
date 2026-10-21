/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020129ac(s32);                         /* extern */
M2C_UNK func_02012a64(s32);                         /* extern */
M2C_UNK func_02017c94();                            /* extern */
M2C_UNK func_0207fe24();                            /* extern */
M2C_UNK func_0207fe28(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020b6524;
extern M2C_UNK data_020bde84;
extern u8 data_020e2bc8;
extern s8 data_020e2bcc;

void func_02028a50(u8 arg0) {
    func_0207fe28(&data_020bde84, 0x7B);
    func_020129ac(*((M2C_UNK *) ((s8 *) &data_020b6524 + (data_020e2bc8 * 4))));
    func_02012a64(*((M2C_UNK *) ((s8 *) &data_020b6524 + (arg0 * 4))));
    func_02017c94();
    data_020e2bc8 = arg0;
    func_0207fe24();
    if (data_020e2bc8 == 1) {
        data_020e2bcc = 0x20;
        return;
    }
    if (data_020e2bc8 == 3) {
        data_020e2bcc = 0x2E;
        return;
    }
    data_020e2bcc = 0x2C;
}
