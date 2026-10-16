/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020904e8(M2C_UNK);
void func_02094668(M2C_UNK);

extern s32 data_020c3638;
extern s32 data_020fae68;
extern s32 data_020fae6c;
extern s32 data_020fae70;

void func_020915ac(void) {
    if (data_020c3638 != -1) {
        func_02094668(data_020c3638);
    }
    func_020904e8(data_020fae70);
    data_020fae70 = 0;
    data_020fae6c = 0;
    data_020fae68 = 0;
}
