/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02096374(M2C_UNK, M2C_UNK);
void func_0209639c(M2C_UNK, M2C_UNK);
M2C_UNK func_0209361c(void);
void func_02094374(M2C_UNK);
void func_020957cc(M2C_UNK, M2C_UNK);

void func_02095760(void) {
    func_0209639c(7, (s32) func_020957cc);
    if (func_0209361c() != 0) {
        return;
    }
    if (func_02096374(7, 1) != 0) {
        return;
    }
    do {
        func_02094374(0x64);
    } while (func_02096374(7, 1) == 0);
}
