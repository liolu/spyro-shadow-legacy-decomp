/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02040230(void **);                     /* extern */
M2C_UNK func_0204029c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020ebb54;
extern M2C_UNK data_020ebb58;

void func_0203fc9c(void) {
    void *sp0;
    void **temp_r0;
    void *var_r0;

    var_r0 = M2C_FIELD(&data_020ebb54, void **, 8);
    sp0    = var_r0;
    if (var_r0 != &data_020ebb58) {
        do {
            temp_r0 = M2C_FIELD(var_r0, void ***, 0x10);
            if (temp_r0 != NULL) {
                M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
            }
            func_02040230(&sp0);
            var_r0 = sp0;
        } while (var_r0 != &data_020ebb58);
    }
    func_0204029c(&data_020ebb54);
}
