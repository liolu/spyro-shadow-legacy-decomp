/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02011b88();                                /* extern */
extern s32 data_020c3b68;

u16 func_02011d98(void) {
    return (u16) M2C_FIELD(((func_02011b88() * 0xC) + data_020c3b68), s32 *, 8);
}
