/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020718bc(void *);                      /* extern */
M2C_UNK func_0207ff14(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_020c0800;

void *func_02053d88(void *arg0) {
    func_0207ff14(M2C_FIELD(arg0, s32 *, 0x10A8), &data_020c0800, 0x21);
    func_0207ff14(M2C_FIELD(arg0, s32 *, 0x10AC), &data_020c0800, 0x22);
    func_0207ff14(M2C_FIELD(arg0, s32 *, 0x10B0), &data_020c0800, 0x23);
    func_020718bc(arg0);
    return arg0;
}
