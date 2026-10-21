/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_02019bb4(s32);                            /* extern */
extern M2C_UNK data_020df180;

void func_02019b08(s32 arg0, s32 arg1) {
    *func_02019bb4(arg1)          = arg0;
    ((s8 *) &data_020df180)[arg1] = 1;
}
