/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004490(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020bd128;
extern M2C_UNK data_020bd154;

void func_020177a8(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x40);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x40) = NULL;
        func_02004490(&data_020bd128);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x44);
    if (temp_r0_2 != NULL) {
        if (temp_r0_2 != NULL) {
            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
        }
        M2C_FIELD(arg0, void ***, 0x44) = NULL;
        func_02004490(&data_020bd154);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x48);
    if (temp_r0_3 == NULL) {
        return;
    }
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    M2C_FIELD(arg0, void ***, 0x48) = NULL;
}
