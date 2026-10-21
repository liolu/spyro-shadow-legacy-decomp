#include "m2c.h"

u16 func_02081c84(void *arg0) {
    return (u16) (M2C_FIELD(arg0, u16 *, 6) & 0xF0);
}
