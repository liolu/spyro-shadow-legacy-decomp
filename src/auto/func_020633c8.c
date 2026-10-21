/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02005b98(void *, void *);

s32 func_020633c8(s32 arg0) {
    u8 sp0[12];

    func_02005b98(sp0, M2C_FIELD(arg0, void **, 0xA4));
    return (s32) sp0;
}
