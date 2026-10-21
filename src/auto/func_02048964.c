/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02048964(u16 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    *arg0 = (*arg0 & ~0x8000) | ((arg4 & 1) << 0xF);
    *arg0 = (*arg0 & ~0x1F) | (arg3 & 0x1F);
    *arg0 = (*arg0 & ~0x3E0) | ((arg2 & 0x1F) << 5);
    *arg0 = (*arg0 & ~0x7C00) | ((arg1 & 0x1F) << 0xA);
}
