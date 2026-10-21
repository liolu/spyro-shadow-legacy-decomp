/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0201fef4(M2C_UNK *);                     /* extern */
extern M2C_UNK data_020e22c4;

void func_0201f744(void *arg0) {
    void *temp_r0;

    temp_r0                   = func_0201fef4(&data_020e22c4);
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(temp_r0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
}
