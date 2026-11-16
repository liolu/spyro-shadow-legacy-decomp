#include "m2c.h"

extern s32 data_020ebca4;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020a9f7c(void) {
    data_020ebca4 = 0x90000;
}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020a9f7c_ctor)(void) = __sinit_020a9f7c;
