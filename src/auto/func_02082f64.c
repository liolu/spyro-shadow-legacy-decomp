/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207fe44(s32);                         /* extern */
M2C_UNK func_0208fcf0();                            /* extern */
M2C_UNK func_0208fd04();                            /* extern */
extern s8 data_020f6f3c;

void func_02082f64(void *arg0) {
    if (data_020f6f3c == 0) {
        return;
    }
    func_0208fd04();
    func_0208fcf0();
    func_0207fe44(M2C_FIELD(arg0, s32 *, 4));
    func_0207fe44(M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    data_020f6f3c             = 0;
}
