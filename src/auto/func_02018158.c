/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020df0fc;

void func_02018158(void) {
    if (data_020df0fc == 0) {
        data_020df0fc = 1;
        return;
    }
    data_020df0fc = 0;
}
