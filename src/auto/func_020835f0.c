/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207fe44(void *);                      /* extern */
M2C_UNK func_02083528();                            /* extern */
extern M2C_UNK data_020c2ff4;

void func_020835f0(void *arg0, void *arg1) {
    void *temp_r1;
    void *temp_r1_2;

    func_02083528();
    if (arg1 == M2C_FIELD(arg0, void **, 0xC)) {
        M2C_FIELD(arg0, void **, 0xC) = (void *) M2C_FIELD(arg1, void **, 0x14);
    }
    temp_r1 = M2C_FIELD(arg1, void **, 0x18);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void **, 0x14) = (void *) M2C_FIELD(arg1, void **, 0x14);
    }
    temp_r1_2 = M2C_FIELD(arg1, void **, 0x14);
    if (temp_r1_2 != NULL) {
        M2C_FIELD(temp_r1_2, void **, 0x18) = (void *) M2C_FIELD(arg1, void **, 0x18);
    }
    M2C_FIELD(arg1, void **, 0x14) = NULL;
    M2C_FIELD(arg1, void **, 0x18) = (void *) M2C_FIELD(arg1, void **, 0x14);
    if (arg1 == NULL) {
        return;
    }
    M2C_FIELD(arg1, M2C_UNK **, 0) = &data_020c2ff4;
    func_0207fe44(arg1);
}
