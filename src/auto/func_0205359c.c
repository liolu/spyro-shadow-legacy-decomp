/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02018208();                                /* extern */
M2C_UNK func_0204f094();                         /* extern */
M2C_UNK func_02071800();                            /* extern */
M2C_UNK func_02071838();                         /* extern */
M2C_UNK func_0207fe44();                         /* extern */
M2C_UNK func_02080778();                   /* extern */
M2C_UNK func_02082e70();                    /* extern */
extern u16 data_020f535c;
extern s32 data_020f5360;
extern M2C_UNK data_020f5370;

void func_0205359c(void *arg0) {
    s32 temp_r4;

    func_0204f094(arg0 + 0xB0);
    if (M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
        func_02071800();
        temp_r4 = M2C_FIELD(arg0, s32 *, 0xAC);
        if (temp_r4 != 0) {
            func_02071838(temp_r4);
            func_0207fe44(temp_r4);
        }
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x94)  = 0x1F;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    data_020f535c -= 1;
    if (data_020f535c != 0) {
        return;
    }
    func_02082e70(func_02018208(), data_020f5360);
    func_02080778(&data_020f5370);
}
