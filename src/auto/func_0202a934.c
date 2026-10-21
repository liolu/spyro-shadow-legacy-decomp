/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s8 data_020e36a4;
extern void *data_020e36c8;

void func_0202a934(s32 arg0) {
    if (data_020e36a4 != 0) {
        M2C_FIELD(M2C_FIELD(data_020e36c8, void **, 8), s32 *, 0x31C) = arg0;
    }
}
