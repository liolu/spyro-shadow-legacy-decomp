/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208f800(s32, s32);                    /* extern */
extern M2C_UNK data_020e1e9c;

void func_0201b848(s32 arg0, s32 arg1, s32 arg2) {
    switch (arg0) {                                 /* irregular */
        case 0:
            M2C_FIELD(&data_020e1e9c, s32 *, 0xC) = arg2;
            func_0208f800(0x0400006C, arg2);
            return;
        case 1:
            M2C_FIELD(&data_020e1e9c, s32 *, 0x2C) = arg2;
            func_0208f800(0x0400106C, arg2);
            return;
        case 2:
            M2C_FIELD(&data_020e1e9c, s32 *, 0xC)  = arg2;
            M2C_FIELD(&data_020e1e9c, s32 *, 0x2C) = arg2;
            func_0208f800(0x0400006C, arg2);
            func_0208f800(0x0400106C, arg2);
            return;
    }
}
