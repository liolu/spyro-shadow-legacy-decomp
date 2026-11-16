#include "m2c.h"

extern s32 data_020ebd28;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020aa0d0(void) {
    data_020ebd28 = 0x90000;
}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020aa0d0_ctor)(void) = __sinit_020aa0d0;
