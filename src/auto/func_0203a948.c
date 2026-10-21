/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020044a0();                            /* extern */
M2C_UNK func_0201844c();                            /* extern */
extern s8 data_020e8820;
extern M2C_UNK data_020e8948;
extern M2C_UNK data_020e89c0;
extern M2C_UNK data_020e8a38;
extern M2C_UNK data_020e8ab0;
extern M2C_UNK data_020e8b28;
extern M2C_UNK data_020e8ba0;
extern M2C_UNK data_020e8c18;
extern M2C_UNK data_020e8c90;

void func_0203a948(void) {
    if (M2C_FIELD(&data_020e8c18, s32 *, 0x10) != 0) {
        func_020044a0();
        M2C_FIELD(&data_020e8c18, s32 *, 0x10) = 0;
    }
    if (M2C_FIELD(&data_020e8ba0, s32 *, 0x10) != 0) {
        func_020044a0();
        M2C_FIELD(&data_020e8ba0, s32 *, 0x10) = 0;
    }
    if (M2C_FIELD(&data_020e8b28, s32 *, 0x10) != 0) {
        func_020044a0();
        M2C_FIELD(&data_020e8b28, s32 *, 0x10) = 0;
    }
    if (M2C_FIELD(&data_020e8a38, s32 *, 0x10) != 0) {
        func_020044a0();
        M2C_FIELD(&data_020e8a38, s32 *, 0x10) = 0;
    }
    if (M2C_FIELD(&data_020e89c0, s32 *, 0x10) != 0) {
        func_020044a0();
        M2C_FIELD(&data_020e89c0, s32 *, 0x10) = 0;
    }
    if (M2C_FIELD(&data_020e8948, s32 *, 0x10) != 0) {
        func_020044a0();
        M2C_FIELD(&data_020e8948, s32 *, 0x10) = 0;
    }
    if (M2C_FIELD(&data_020e8c90, s32 *, 0x10) != 0) {
        func_020044a0();
        M2C_FIELD(&data_020e8c90, s32 *, 0x10) = 0;
    }
    if (M2C_FIELD(&data_020e8ab0, s32 *, 0x10) != 0) {
        func_020044a0();
        M2C_FIELD(&data_020e8ab0, s32 *, 0x10) = 0;
    }
    if (data_020e8820 == 0) {
        return;
    }
    func_0201844c();
}
