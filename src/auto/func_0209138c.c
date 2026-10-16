/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0208fe24(M2C_UNK);
void func_02094668(M2C_UNK);

extern s32 data_020c3638;
extern s32 data_020fae5c;

void func_0209138c(void) {
    if (data_020c3638 != -1) {
        func_02094668(data_020c3638);
    }
    func_0208fe24(data_020fae5c);
    data_020fae5c = 0;
}
