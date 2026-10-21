/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02018208();                                /* extern */
M2C_UNK func_02050f64(void *);                      /* extern */
M2C_UNK func_0207fe44(void *);                      /* extern */
M2C_UNK func_02080b48(void *);                      /* extern */
M2C_UNK func_02082e70(s32, s32);                    /* extern */
extern M2C_UNK data_020c187c;
extern s32 data_020ebd34;

void *func_02071b84(void *arg0) {
    s32 temp_r2;
    s8 var_r0;
    s8 var_r0_2;
    void *temp_r5;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c187c;
    temp_r2                        = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r2 > -1) {
        if (M2C_FIELD(((temp_r2 * 0xC) + data_020ebd34), s32 *, 8) == 1) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        var_r0_2 = var_r0;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        func_02082e70(func_02018208(), M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x34));
        temp_r5 = M2C_FIELD(arg0, void **, 8);
        if (temp_r5 != NULL) {
            func_02080b48(temp_r5);
            func_0207fe44(temp_r5);
        }
    }
    func_02050f64(arg0);
    return arg0;
}
