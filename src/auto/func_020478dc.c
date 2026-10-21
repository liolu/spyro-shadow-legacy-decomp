/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02009394();                                /* extern */
M2C_UNK func_02047b08(void *);                      /* extern */
M2C_UNK func_0205f6e4(s32, s16);                    /* extern */
s32 func_0208f070(M2C_UNK, M2C_UNK);                /* extern */
extern s32 data_020ebca8;

void func_020478dc(void *arg0) {
    s16 temp_r4;
    s16 temp_r5;
    s16 temp_r5_2;
    s32 temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x278);
    switch (temp_r0) {                              /* irregular */
        case 0:
            temp_r5 = M2C_FIELD(arg0, s16 *, 0x288);
            if (temp_r5 != -1) {
                func_0205f6e4(func_02009394(), temp_r5);
            }
            func_02047b08(arg0);
            data_020ebca8 = func_0208f070(0x1000, 0x2000);
            temp_r0_2     = M2C_FIELD(arg0, void **, 0x274);
            if (temp_r0_2 != NULL) {
                M2C_FIELD(temp_r0_2, s32 *, 0x3BC8) = 0x3000;
                M2C_FIELD(temp_r0_2, s8 *, 0x3BC6)  = 1;
            }
            M2C_FIELD(arg0, s32 *, 0x27C) = 2;
            return;
        case 1:
        case 2:
            if (M2C_FIELD(arg0, s32 *, 0x27C) != 2) {
                temp_r5_2 = M2C_FIELD(arg0, s16 *, 0x288);
                if (temp_r5_2 != -1) {
                    func_0205f6e4(func_02009394(), temp_r5_2);
                }
                func_02047b08(arg0);
                M2C_FIELD(arg0, s32 *, 0x27C) = 2;
                return;
            }
            temp_r0_3 = M2C_FIELD(arg0, void **, 0x274);
            if (temp_r0_3 != NULL) {
                M2C_FIELD(temp_r0_3, s8 *, 0x3BC5) = 1;
            }
            temp_r4 = M2C_FIELD(arg0, s16 *, 0x28A);
            if (temp_r4 == -1) {
                return;
            }
            func_0205f6e4(func_02009394(), temp_r4);
            return;
    }
}
