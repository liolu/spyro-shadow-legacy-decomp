/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02083674(void *arg0, void *arg1) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    temp_r3 = M2C_FIELD(arg1, void **, 0x18);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void **, 0x14) = (void *) M2C_FIELD(arg1, void **, 0x14);
    }
    temp_r3_2 = M2C_FIELD(arg1, void **, 0x14);
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, void **, 0x18) = (void *) M2C_FIELD(arg1, void **, 0x18);
    }
    M2C_FIELD(arg1, void **, 0x14) = NULL;
    M2C_FIELD(arg1, void **, 0x18) = (void *) M2C_FIELD(arg1, void **, 0x14);
    temp_r3_3                      = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r3_3 != NULL) {
        M2C_FIELD(arg1, void **, 0x18)      = (void *) M2C_FIELD(temp_r3_3, void **, 0x18);
        M2C_FIELD(arg1, void **, 0x14)      = temp_r3_3;
        M2C_FIELD(temp_r3_3, void **, 0x18) = arg1;
    }
    M2C_FIELD(arg0, void **, 0xC) = arg1;
    return arg1;
}
