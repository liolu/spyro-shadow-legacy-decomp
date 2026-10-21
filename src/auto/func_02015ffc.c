/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02016f24(M2C_UNK *);                       /* extern */
M2C_UNK func_02051c38(s32, s32);                    /* extern */
s32 func_02051d78();                                /* extern */
M2C_UNK func_020550ac(s32, s32);                    /* extern */
M2C_UNK func_02055890(s32, s32);                    /* extern */
M2C_UNK func_02055ad8(s32, s32, M2C_UNK);           /* extern */
s32 func_0205602c();                                /* extern */
M2C_UNK func_020573c4(s32, s32);                    /* extern */
M2C_UNK func_02058954(s32, M2C_UNK, s32);           /* extern */
s32 func_0207fe74(s32);                             /* extern */
extern s32 data_020dedb0;
extern s32 data_020dedb4;
extern s32 data_020dedb8;
extern s32 data_020dedbc;
extern s32 data_020dedc0;
extern s32 data_020dedc4;
extern s32 data_020dedc8;
extern s32 data_020dedd0;
extern s32 data_020dedd4;
extern M2C_UNK data_020deebc;

void func_02015ffc(void) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r0_8;
    s32 var_r0_9;

    var_r0 = func_0207fe74(0x3C88);
    if (var_r0 != 0) {
        var_r0 = func_02051d78();
    }
    data_020dedc8 = var_r0;
    func_02051c38(var_r0, 0x710);
    func_020573c4(data_020dedc8, 0x4DF);
    func_02058954(data_020dedc8, 0, func_02016f24(&data_020deebc));
    var_r0_2 = func_0207fe74(0xF0);
    if (var_r0_2 != 0) {
        var_r0_2 = func_0205602c();
    }
    data_020dedb0 = var_r0_2;
    func_02055ad8(var_r0_2, 0xC3, 1);
    func_020550ac(data_020dedb0, 0x193);
    var_r0_3 = func_0207fe74(0x3C88);
    if (var_r0_3 != 0) {
        var_r0_3 = func_02051d78();
    }
    data_020dedd0 = var_r0_3;
    func_02051c38(var_r0_3, 0x7AB);
    func_020573c4(data_020dedd0, 0x481);
    func_02058954(data_020dedd0, 0, func_02016f24(&data_020deebc));
    var_r0_4 = func_0207fe74(0x3C88);
    if (var_r0_4 != 0) {
        var_r0_4 = func_02051d78();
    }
    data_020dedc4 = var_r0_4;
    func_02051c38(var_r0_4, 0x7AA);
    func_020573c4(data_020dedc4, 0x4C7);
    func_02058954(data_020dedc4, 0, func_02016f24(&data_020deebc));
    var_r0_5 = func_0207fe74(0x3C88);
    if (var_r0_5 != 0) {
        var_r0_5 = func_02051d78();
    }
    data_020dedb4 = var_r0_5;
    func_02051c38(var_r0_5, 0x7A9);
    func_020573c4(data_020dedb4, 0x484);
    func_02058954(data_020dedb4, 0, func_02016f24(&data_020deebc));
    var_r0_6 = func_0207fe74(0xF0);
    if (var_r0_6 != 0) {
        var_r0_6 = func_0205602c();
    }
    data_020dedc0 = var_r0_6;
    func_02055ad8(var_r0_6, 0x133, 1);
    func_02055890(data_020dedc0, func_02016f24(&data_020deebc));
    func_020550ac(data_020dedc0, 0x2DA);
    func_020550ac(data_020dedc0, 0x2DB);
    var_r0_7 = func_0207fe74(0x3C88);
    if (var_r0_7 != 0) {
        var_r0_7 = func_02051d78();
    }
    data_020dedb8 = var_r0_7;
    func_02051c38(var_r0_7, 0x299);
    func_020573c4(data_020dedb8, 0x920);
    func_02058954(data_020dedb8, 0, func_02016f24(&data_020deebc));
    var_r0_8 = func_0207fe74(0xF0);
    if (var_r0_8 != 0) {
        var_r0_8 = func_0205602c();
    }
    data_020dedbc = var_r0_8;
    func_02055ad8(var_r0_8, 0x136, 1);
    func_02055890(data_020dedbc, func_02016f24(&data_020deebc));
    func_020550ac(data_020dedbc, 0x40C);
    var_r0_9 = func_0207fe74(0xF0);
    if (var_r0_9 != 0) {
        var_r0_9 = func_0205602c();
    }
    data_020dedd4 = var_r0_9;
    func_02055ad8(var_r0_9, 0xBB, 1);
    func_02055890(data_020dedd4, func_02016f24(&data_020deebc));
    func_020550ac(data_020dedd4, 0x16E);
}
