/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02092de4();                            /* extern */
M2C_UNK func_02092f0c(void *);                      /* extern */
M2C_UNK func_020932c8(void *);                      /* extern */
M2C_UNK func_020937b8(void *);                      /* extern */
M2C_UNK func_02094304();                            /* extern */
extern void **data_020faef8;
extern M2C_UNK data_020faf14;

void func_02092fe8(void) {
    void *temp_r4;

    func_02094304();
    temp_r4 = *data_020faef8;
    func_020937b8(temp_r4);
    func_020932c8(temp_r4);
    *((M2C_UNK *) ((s8 *) &data_020faf14 + (M2C_FIELD(temp_r4, s32 *, 0x6C) * 4))) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x64)                                                = 2;
    func_02092f0c(temp_r4 + 0x90);
    func_02092de4();
}
