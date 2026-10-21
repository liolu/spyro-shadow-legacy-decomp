#include "engine.h"
#include "m2c.h"

void func_0208f960(s32 arg0) {
    *(u16 *) 0x04000004 = (*(u16 *) 0x04000004 & 0x3F) | ((u8) arg0 << 8) | ((s32) (arg0 & 0x100) >> 1);
}
