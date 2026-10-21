/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02078960(void *);                      /* extern */
extern void *data_020e36c8;

void func_0202a174(void) {
    void **temp_r0;

    func_02078960(M2C_FIELD(data_020e36c8, void **, 0));
    temp_r0 = M2C_FIELD(data_020e36c8, void ***, 8);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s8), 0x8C)(temp_r0, M2C_FIELD(M2C_FIELD(data_020e36c8, void **, 0), s8 *, 0x8DC));
}
