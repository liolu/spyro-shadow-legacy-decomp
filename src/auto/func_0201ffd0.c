#include "m2c.h"

extern M2C_UNK data_020e2308;

void func_0201ffd0(void) {
    M2C_FIELD(&data_020e2308, u8 *, 0xB) = (u8) (M2C_FIELD(&data_020e2308, u8 *, 0xB) | 0x80);
}
