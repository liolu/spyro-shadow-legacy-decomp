/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02018208();                                /* extern */
M2C_UNK func_02080778(M2C_UNK *);                   /* extern */
M2C_UNK func_02082e70(s32, s32);                    /* extern */
extern M2C_UNK data_020f62d0;
extern M2C_UNK data_020f62dc;
extern M2C_UNK data_020f6318;
extern M2C_UNK data_020f6354;

void func_02064084(void *arg0) {
    if (M2C_FIELD(&data_020f62dc, s8 *, 0x38) != 0) {
        func_02082e70(func_02018208(), M2C_FIELD(&data_020f62d0, s32 *, 0));
        func_02082e70(func_02018208(), M2C_FIELD(&data_020f62d0, s32 *, 4));
        func_02082e70(func_02018208(), M2C_FIELD(&data_020f62d0, s32 *, 8));
        func_02080778(&data_020f62dc);
        func_02080778(&data_020f6318);
        func_02080778(&data_020f6354);
    }
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
}
