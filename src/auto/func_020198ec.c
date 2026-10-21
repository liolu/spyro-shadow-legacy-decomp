/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020198e0(s32, s32);                        /* extern */

s32 func_020198ec(s32 arg0, s32 arg1) {
    return func_020198e0(arg0 << 6, arg1 >> 6) * 0x10;
}
