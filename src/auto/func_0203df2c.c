/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020062d0();                            /* extern */
M2C_UNK func_0200af08(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02019640(M2C_UNK);                     /* extern */
M2C_UNK func_02019660(M2C_UNK);                     /* extern */
M2C_UNK func_02019b08(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0201b770(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0203e0e8();                            /* extern */
s32 func_020822c0();                                /* extern */
extern s32 data_020bed70;
extern u32 data_020bed74;
extern M2C_UNK data_020d9f9c;
extern s8 data_020df114;
extern s32 data_020eb750;
extern s32 data_020eb754;

void func_0203df2c(void) {
    s32 temp_r0;
    s32 temp_r0_2;

    switch (data_020bed70) {                        /* irregular */
        case 0:
            func_020062d0();
            temp_r0       = data_020eb754 - func_020822c0();
            data_020eb754 = temp_r0;
            if (temp_r0 > 0) {
                return;
            }
            data_020eb750 = 0x266;
            func_0200af08(0, 0);
            if ((u32) data_020bed74 < 0x209U) {
                data_020bed70 = 2;
                return;
            }
            if ((data_020df114 != 0) && (M2C_FIELD(&data_020d9f9c, u8 *, 0x100) == 1)) {
                func_0201b770(2, 0x3F, 1);
                func_02019b08(0x1E, 0);
                func_02019b08(0x14, 1);
                func_02019660(9);
                func_02019640(4);
                return;
            }
            func_0201b770(2, 0x3F, 1);
            func_02019b08(3, 0);
            func_02019b08(8, 1);
            return;
        case 1:
            func_0203e0e8();
            data_020bed70 = 0;
            return;
        case 2:
            func_020062d0();
            temp_r0_2     = data_020eb750 - func_020822c0();
            data_020eb750 = temp_r0_2;
            if (temp_r0_2 > 0) {
                return;
            }
            data_020eb754 = 0x4000;
            data_020bed70 = 1;
            return;
    }
}
