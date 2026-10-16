/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0209572c(void);
M2C_UNK func_020957fc(void);
M2C_UNK func_0209585c(void);
void func_02095a50(M2C_UNK);
M2C_UNK func_02095cd4(M2C_UNK);

void func_02095930(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0209585c();
    if (temp_r0 >= arg0) {
        return;
    }
    if ((s32) (temp_r0 + func_020957fc()) >= arg0) {
        do {

        } while (func_02095cd4(0) != 0);
        if (func_0209585c() >= arg0) {
            return;
        }
        goto block_8;
    }
    func_02095a50(1);
block_8:
    func_0209572c();
    do {
        func_02095cd4(1);
    } while (func_0209585c() < arg0);
}
