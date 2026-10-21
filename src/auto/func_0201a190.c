/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020129ac(s32);                         /* extern */
M2C_UNK func_0207ff14(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_020bda10;
extern s32 data_020df57c;
extern s32 data_020df580;
extern s32 data_020df584;
extern s32 data_020df588;

void func_0201a190(void) {
    func_020129ac(data_020df584);
    func_0207ff14(data_020df57c, &data_020bda10, 0x7B);
    data_020df57c = 0;
    func_0207ff14(data_020df580, &data_020bda10, 0x7E);
    data_020df580 = 0;
    data_020df588 = 0;
}
