/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0208e478(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0208e698(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0208ea2c(M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
extern M2C_UNK data_020f7038;
extern M2C_UNK data_020f7084;
extern M2C_UNK data_020f70f4;
extern M2C_UNK data_020f7168;
extern M2C_UNK data_020f7198;

void func_02086234(void) {
    func_0208e478(&data_020f70f4, &data_020f7084, &data_020f7168);
    func_0208ea2c(&data_020f7168, &data_020f7168, M2C_FIELD(&data_020f7038, s32 *, 0xEC),
                  M2C_FIELD(&data_020f7038, s32 *, 0xF0), M2C_FIELD(&data_020f7038, s32 *, 0xF4));
    func_0208e698(&data_020f7168, &data_020f7198);
}
