/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020772d8(s32);                             /* extern */
extern s8 data_020e36a4;
extern void *data_020e36c8;

s32 func_0202a86c(void) {
    if (data_020e36a4 == 0) {
        return 1;
    }
    return func_020772d8(M2C_FIELD(data_020e36c8, s32 *, 8));
}
