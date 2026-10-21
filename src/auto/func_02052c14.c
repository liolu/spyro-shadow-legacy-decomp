/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004490(M2C_UNK *);                   /* extern */
M2C_UNK func_02050f64(void *);                      /* extern */
M2C_UNK func_0205216c(void *);                      /* extern */
M2C_UNK func_0207fe44(void *);                      /* extern */
extern M2C_UNK data_020c0618;
extern M2C_UNK data_020c063c;
extern M2C_UNK data_020c0674;
extern M2C_UNK data_020c0698;
extern M2C_UNK data_020c06bc;
extern s32 data_020ebd34;

void *func_02052c14(void *arg0) {
    s32 temp_r2;
    s8 var_r0;
    s8 var_r0_2;
    void *temp_r5;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c0618;
    func_02004490(&data_020c063c);
    temp_r2 = M2C_FIELD(arg0, s32 *, 4);
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
        func_02004490(&data_020c0674);
        temp_r5 = M2C_FIELD(arg0, void **, 8);
        if (temp_r5 != NULL) {
            func_0205216c(temp_r5);
            func_0207fe44(temp_r5);
        }
        func_02004490(&data_020c0698);
    }
    func_02004490(&data_020c06bc);
    func_02050f64(arg0);
    func_0207fe44(arg0);
    return arg0;
}
