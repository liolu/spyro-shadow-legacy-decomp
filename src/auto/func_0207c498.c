/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202a4c0(M2C_UNK);                     /* extern */
M2C_UNK func_020776bc();                            /* extern */
extern s32 data_020c265c;
extern s32 data_020c2660;
extern s32 data_020c2664;

void func_0207c498(void *arg0, s32 arg1, s32 arg2) {
    func_020776bc();
    switch (arg2) {                                 /* irregular */
        case 2:
            M2C_FIELD(arg0, s32 *, 0x2F8) = 0x3C000;
            return;
        case 0:
            M2C_FIELD(arg0, s32 *, 0x2F8) = 0x14000;
            return;
        case 1:
            func_0202a4c0(0x2D);
            M2C_FIELD(arg0, s32 *, 0x2DC) = (s32) data_020c2664;
            M2C_FIELD(arg0, s32 *, 0x2E0) = (s32) data_020c265c;
            M2C_FIELD(arg0, s32 *, 0x2E4) = (s32) data_020c2660;
            M2C_FIELD(arg0, s32 *, 0x2F8) = 0x14000;
            return;
    }
}
