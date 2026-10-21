/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020185fc(M2C_UNK);

extern s32 data_020bd644;
extern s8 data_020df11c;
extern s32 data_020df12c;

void func_02018588(void) {
    if (data_020bd644 != data_020df12c) {
        func_020185fc(data_020bd644);
    }
    data_020df11c = 0;
}
