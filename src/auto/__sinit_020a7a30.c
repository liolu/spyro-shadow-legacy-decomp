#include "m2c.h"

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_020a7a30(void) {}

#pragma define_section CTOR ".ctor" \
                            ".ctor"

__declspec(CTOR) void (*__sinit_020a7a30_ctor)(void) = __sinit_020a7a30;
