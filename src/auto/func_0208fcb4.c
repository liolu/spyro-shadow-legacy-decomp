#include "m2c.h"

M2C_UNK func_0208fd60(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020fae56;

void func_0208fcb4(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_0208fd60(&data_020fae56);
}
