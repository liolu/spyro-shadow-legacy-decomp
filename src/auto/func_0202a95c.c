/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s8 data_020e36a4;
extern void *data_020e36c8;

s32 func_0202a95c(void) {
    if (data_020e36a4 != 0) {
        return M2C_FIELD(M2C_FIELD(data_020e36c8, void **, 8), s32 *, 0x314);
    }
    return 0;
}
