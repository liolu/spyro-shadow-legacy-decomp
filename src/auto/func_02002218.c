#include "m2c.h"

void func_02002218(void *arg0, u8 arg1) {
    if (arg1 != M2C_FIELD(arg0, u8 *, 0x10E)) {
        M2C_FIELD(arg0, u8 *, 0x10E) = arg1;
    }
}
