/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0209022c(M2C_UNK);
void func_02094668(M2C_UNK);

extern s32 data_020c3638;
extern s32 data_020fae78;
extern s32 data_020fae84;
extern s32 data_020fae88;
extern s32 data_020fae8c;

void func_020918a8(void) {
    if (data_020c3638 != -1) {
        func_02094668(data_020c3638);
    }
    func_0209022c(data_020fae84);
    data_020fae8c = 0;
    data_020fae88 = 0;
    data_020fae78 = 0;
    data_020fae84 = 0;
}
