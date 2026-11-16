/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02082208(void *arg0, s32 arg1) {
    return *(s32 *) (M2C_FIELD(arg0, s32 *, 4) + (arg1 * 4));
}
