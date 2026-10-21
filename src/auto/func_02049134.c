/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008130(s8, s16);                     /* extern */
M2C_UNK func_020483f8(void *);                      /* extern */
M2C_UNK func_0204f964(void *);                      /* extern */
M2C_UNK func_020506c0(void *);                      /* extern */
M2C_UNK func_0205b784(void *);                      /* extern */
M2C_UNK func_02071838(void *);                      /* extern */
M2C_UNK func_0207fe44(void *);                      /* extern */
extern M2C_UNK data_020bf760;
extern M2C_UNK data_020bfb1c;
extern M2C_UNK data_020bfb58;
extern M2C_UNK data_020bfbc4;

void *func_02049134(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020bfb1c;
    M2C_FIELD(arg0, M2C_UNK **, 0x90) = &data_020bfb58;
    func_02008130(M2C_FIELD(arg0, s8 *, 0xD2), M2C_FIELD(arg0, s16 *, 0xD0));
    func_020483f8(arg0);
    func_02071838(arg0 + 0x1D0);
    func_0204f964(arg0 + 0xF4);
    M2C_FIELD(arg0, M2C_UNK **, 0xDC) = &data_020bfbc4;
    M2C_FIELD(arg0, M2C_UNK **, 0xDC) = &data_020bf760;
    func_020506c0(arg0 + 0x90);
    func_0205b784(arg0);
    func_0207fe44(arg0);
    return arg0;
}
