/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02011f44();                            /* extern */
s32 func_02081c84();                                /* extern */
extern s32 data_020b6c94;
extern s32 data_020b6ca8;
extern s32 data_020b6cac;
extern s32 data_020b6cb4;
extern s32 data_020b6cc0;

void func_02016b4c(void *arg0) {
    s32 temp_r0;

    func_02011f44();
    temp_r0 = func_02081c84();
    switch (temp_r0) {                              /* irregular */
        case 0x40:
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x10D) = 0;
            M2C_FIELD(arg0, s32 *, 0x14)                        = (s32) data_020b6ca8;
            return;
        case 0x50:
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x10D) = 1;
            M2C_FIELD(arg0, s32 *, 0x14)                        = (s32) data_020b6cac;
            return;
        case 0x10:
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x10D) = 2;
            M2C_FIELD(arg0, s32 *, 0x14)                        = (s32) data_020b6cb4;
            return;
        case 0x90:
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x10D) = 3;
            M2C_FIELD(arg0, s32 *, 0x14)                        = (s32) data_020b6cc0;
            return;
        case 0x80:
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x10D) = 4;
            M2C_FIELD(arg0, s32 *, 0x14)                        = (s32) data_020b6c94;
            return;
        case 0xA0:
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x10D) = 5;
            M2C_FIELD(arg0, s32 *, 0x14)                        = (s32) (0 - data_020b6cc0);
            return;
        case 0x20:
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x10D) = 6;
            M2C_FIELD(arg0, s32 *, 0x14)                        = (s32) (0 - data_020b6cb4);
            return;
        case 0x60:
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x10D) = 7;
            M2C_FIELD(arg0, s32 *, 0x14)                        = (s32) (0 - data_020b6cac);
            return;
        default:
            M2C_FIELD(arg0, s32 *, 0x14) = (s32) data_020b6c94;
            return;
    }
}
