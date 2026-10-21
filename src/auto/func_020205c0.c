/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0202286c(void);
void func_02095a50(M2C_UNK);
M2C_UNK func_02095cd4(M2C_UNK);
void func_0209820c(void *);
void func_02098278(void *);

extern M2C_UNK data_020e2308;

void func_020205c0(void) {
    u8 sp0[32];

    do {

    } while (func_02095cd4(0) != 0);
    func_02095a50(0);
    if (M2C_FIELD(&data_020e2308, volatile u8 *, 0xB) & 8) {
        return;
    }
    if (M2C_FIELD(&data_020e2308, volatile u8 *, 0xB) & 0x80) {
        M2C_FIELD(&data_020e2308, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_020e2308, volatile u8 *, 0xB) | 0x40);
        return;
    }
    M2C_FIELD(&data_020e2308, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_020e2308, volatile u8 *, 0xB) & ~0x40);
    func_02098278(sp0);
    func_0202286c();
    func_0209820c(sp0);
}
