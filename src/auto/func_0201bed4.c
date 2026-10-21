/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004490(M2C_UNK *, u16, s32);         /* extern */
M2C_UNK func_0200fdb4(s32, void *);                 /* extern */
u16 func_0200feec();                                /* extern */
M2C_UNK func_020129ac(s32);                         /* extern */
s32 func_02012a64(s32);                             /* extern */
void *func_0207ff70(s32, M2C_UNK *, s32);           /* extern */
extern M2C_UNK data_020bdcec;
extern M2C_UNK data_020bdd74;
extern M2C_UNK data_020bdda0;
extern M2C_UNK data_020bddd8;
extern s32 data_020df0fc;
extern M2C_UNK data_020e2058;

void func_0201bed4(u16 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 temp_r5;

    func_02004490(&data_020bdd74, arg0, arg1);
    temp_r4 = (arg0 * 0x50) + ((data_020df0fc * 0x130) + (s32) &data_020e2058 + 0x44);
    if (M2C_FIELD(temp_r4, void **, 0x10) == NULL) {
        M2C_FIELD(temp_r4, void **, 0x10) = func_0207ff70(arg2, &data_020bdcec, 0xB4F);
        M2C_FIELD(temp_r4, s32 *, 0x2C)   = arg2;
    }
    temp_r5 = func_02012a64(arg1);
    func_02004490(&data_020bdda0, func_0200feec(), M2C_FIELD(temp_r4, s32 *, 0x2C));
    func_0200fdb4(temp_r5, M2C_FIELD(temp_r4, void **, 0x10));
    M2C_FIELD(temp_r4, void **, 0x18) = (void *) (M2C_FIELD(temp_r4, void **, 0x10) + 4);
    M2C_FIELD(temp_r4, u16 *, 0x38)   = (u16) M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x10), u8 *, 0);
    M2C_FIELD(temp_r4, u16 *, 0x3A)   = (u16) M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x10), u8 *, 2);
    M2C_FIELD(temp_r4, s16 *, 0x3C)   = (s16) (M2C_FIELD(temp_r4, u16 *, 0x38) * 4);
    M2C_FIELD(temp_r4, s16 *, 0x3E)   = (s16) (M2C_FIELD(temp_r4, u16 *, 0x3A) * 4);
    M2C_FIELD(temp_r4, s32 *, 0x34)   = (s32) (M2C_FIELD(temp_r4, u16 *, 0x3A) * (M2C_FIELD(temp_r4, u16 *, 0x38) * 2));
    M2C_FIELD(temp_r4, s32 *, 0x40)   = (s32) (M2C_FIELD(temp_r4, u16 *, 0x38) << 5);
    M2C_FIELD(temp_r4, s32 *, 0x44)   = (s32) (M2C_FIELD(temp_r4, u16 *, 0x3A) << 5);
    func_02004490(&data_020bddd8, M2C_FIELD(temp_r4, u16 *, 0x38), (s32) M2C_FIELD(temp_r4, u16 *, 0x3A));
    func_020129ac(arg1);
}
