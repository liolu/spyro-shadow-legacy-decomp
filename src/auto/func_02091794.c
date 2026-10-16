/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02090138(M2C_UNK);
void func_02094668(M2C_UNK);

extern s32 data_020c3638;
extern s32 data_020fae7c;
extern s32 data_020fae80;

void func_02091794(void) {
    if (data_020c3638 != -1) {
        func_02094668(data_020c3638);
    }
    func_02090138(data_020fae80);
    data_020fae80 = 0;
    data_020fae7c = 0;
}
