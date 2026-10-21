/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02094e3c(M2C_UNK, void *);             /* extern */

void func_02017118(void *arg0, M2C_UNK arg1) {
    void *temp_r4;
    void *temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, void **, 0x40);
    if (M2C_FIELD(temp_r4, s8 *, 0x3BC4) != 0) {
        func_02094e3c(arg1, temp_r4 + 0x28);
        M2C_FIELD(temp_r4, s8 *, 0x8C) = 0;
        return;
    }
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x44);
    if (M2C_FIELD(temp_r4_2, s8 *, 0x3BC4) == 0) {
        return;
    }
    func_02094e3c(arg1, temp_r4_2 + 0x28);
    M2C_FIELD(temp_r4_2, s8 *, 0x8C) = 0;
}
