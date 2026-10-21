/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02064714(void *);                      /* extern */
s32 func_02064780();                                /* extern */

void func_020647cc(void *arg0, s32 arg1) {
    if (func_02064780() != 0) {
        func_02064714(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
}
