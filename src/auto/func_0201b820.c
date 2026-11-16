/* compiler: 1.2/b56  */
#include "m2c.h"

extern s32 data_020df0fc;

void func_0201b820(s32 arg0, s32 arg1) {
    *(s16 *) (0x04000050 + (data_020df0fc << 0xC)) = (s16) (arg0 | 0x40 | (arg1 << 8));
}
