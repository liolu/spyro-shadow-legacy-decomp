#include "m2c.h"

M2C_UNK func_0208fd60(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020fae58;

void func_0208fc8c(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_0208fd60(&data_020fae58);
}
