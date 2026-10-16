#include "m2c.h"

M2C_UNK func_0208fd60(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020fae50;

void func_0208fd18(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_0208fd60(&data_020fae50);
}
