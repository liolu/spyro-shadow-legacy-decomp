/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0209581c();                                /* extern */
s32 func_0209585c();                                /* extern */

s32 func_020957fc(void) {
    s32 temp_r4;

    temp_r4 = func_0209585c();
    return (0x100 - temp_r4) - func_0209581c();
}
