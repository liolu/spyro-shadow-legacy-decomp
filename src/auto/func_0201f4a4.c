/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020062d0();                            /* extern */
M2C_UNK func_0201f9ac(M2C_UNK *);                   /* extern */
M2C_UNK func_0201fa3c(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0201fbbc(M2C_UNK *);                   /* extern */
s32 func_0201ff58(M2C_UNK *);                       /* extern */
s32 func_020822c0();                                /* extern */
extern M2C_UNK data_020e22c4;

void func_0201f4a4(void) {
    s32 temp_r0;

    temp_r0 = func_0201ff58(&data_020e22c4);
    switch (temp_r0) {                              /* irregular */
        case 1:
            func_0201fbbc(&data_020e22c4);
            return;
        case 4:
            func_020062d0();
            func_0201fa3c(&data_020e22c4, func_020822c0());
            return;
        case 2:
            func_0201f9ac(&data_020e22c4);
            return;
    }
}
