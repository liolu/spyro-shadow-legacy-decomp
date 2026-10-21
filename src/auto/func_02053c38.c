/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207188c(void *);                      /* extern */
s32 func_0207ff70(s32, M2C_UNK *, M2C_UNK);         /* extern */
M2C_UNK func_0209a344();                            /* extern */
s32 func_0209b06c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0209b078(void *, s32, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
s32 func_0209b150(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0209b6c0(M2C_UNK, M2C_UNK, void *, M2C_UNK); /* extern */
extern M2C_UNK data_020bb7ac;
extern M2C_UNK data_020c0800;

void func_02053c38(void *arg0) {
    func_0209a344();
    func_0207188c(arg0);
    M2C_FIELD(arg0, s32 *, 0x10A8) = func_0207ff70(func_0209b150(&data_020bb7ac, -1, 0, 0), &data_020c0800, 0x3C);
    func_0209b078(arg0 + 0x1014, M2C_FIELD(arg0, s32 *, 0x10A8), &data_020bb7ac, -1, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x109C) = (s32) M2C_FIELD(arg0, s32 *, 0x104C);
    M2C_FIELD(arg0, s32 *, 0x10A0) = 1;
    M2C_FIELD(arg0, s32 *, 0x10A4) = 0x18;
    M2C_FIELD(arg0, s32 *, 0x10AC) = func_0207ff70(func_0209b06c(0x28, 0x14), &data_020c0800, 0x50);
    M2C_FIELD(arg0, s32 *, 0x10B0) = func_0207ff70(func_0209b6c0(0x28, 0x14, arg0 + 0x1014, 0), &data_020c0800, 0x58);
}
