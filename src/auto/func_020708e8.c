#include "m2c.h"

extern M2C_UNK data_020b6e5c;

s16 func_020708e8(s32 arg0) {
    return *((u16 *) ((s8 *) &data_020b6e5c + ((arg0 >> 4) * 4)));
}
