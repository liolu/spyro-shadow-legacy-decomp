/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02011efc();                                /* extern */
extern s32 data_020c3b64;

s32 func_02011ebc(void) {
    return M2C_FIELD(((func_02011efc() * 0x2C) + data_020c3b64), s32 *, 0xC);
}
