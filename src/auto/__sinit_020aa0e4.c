#include "m2c.h"

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020aa0e4(void) {}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020aa0e4_ctor)(void) = __sinit_020aa0e4;
