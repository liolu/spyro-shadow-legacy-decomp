/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02009558();                                /* extern */
s32 func_0201b290();                                /* extern */

s32 func_0201b274(void) {
    s32 temp_r4;

    temp_r4 = func_0201b290();
    return temp_r4 * func_02009558();
}
