/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02080f60(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02088db4(M2C_UNK *);                   /* extern */
M2C_UNK func_02089074();                            /* extern */
M2C_UNK func_0208f800(s32, M2C_UNK);                /* extern */
M2C_UNK func_0208f908();                            /* extern */
M2C_UNK func_0208f988();                            /* extern */
M2C_UNK func_02090da0(u16, M2C_UNK, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_02091090();                            /* extern */
extern M2C_UNK data_027c0000;

s32 func_02081400(void *arg0) {
    func_0208f988();
    *(u16 *) 0x04000304 = (*(u16 *) 0x04000304 & 0xFFFFFDF1) | 0x20E;
    func_0208f908();
    func_02091090();
    func_02089074();
    func_02088db4(&data_027c0000);
    func_02080f60(arg0, 2, 1);
    func_02080f60(arg0, 1, 0);
    func_02090da0(M2C_FIELD(arg0, u16 *, 0x4A0), 0, 0x7FFF, 0x3F, 0);
    func_0208f800(0x0400006C, 0);
    func_0208f800(0x0400106C, 0);
    M2C_FIELD(arg0, s32 *, 0x4B0) = 0;
    return 1;
}
