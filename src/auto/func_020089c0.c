/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

extern s32 data_020d9f90;

s32 func_020089c0(s32 arg0) {
    return (s32) * (u16 *) (data_020d9f90 + M2C_FIELD((data_020d9f90 + (arg0 * 2)), u16 *, 2));
}