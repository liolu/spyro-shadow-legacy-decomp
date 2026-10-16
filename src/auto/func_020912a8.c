/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0208fd98(M2C_UNK);
void func_02094668(M2C_UNK);

extern s32 data_020c3638;
extern s32 data_020fae74;

void func_020912a8(void) {
    if (data_020c3638 != -1) {
        func_02094668(data_020c3638);
    }
    func_0208fd98(data_020fae74);
    data_020fae74 = 0;
}
