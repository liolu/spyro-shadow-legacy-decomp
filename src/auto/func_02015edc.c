/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020dedb0;
extern void **data_020dedb4;
extern void **data_020dedb8;
extern s32 data_020dedbc;
extern s32 data_020dedc0;
extern void **data_020dedc4;
extern void **data_020dedc8;
extern void **data_020dedd0;
extern s32 data_020dedd4;

void func_02015edc(void) {
    if (data_020dedc8 != NULL) {
        M2C_FIELD(*data_020dedc8, M2C_UNK(**)(), 4)(data_020dedc8);
    }
    data_020dedc8 = NULL;
    if (data_020dedd0 != NULL) {
        M2C_FIELD(*data_020dedd0, M2C_UNK(**)(), 4)(data_020dedd0);
    }
    data_020dedd0 = NULL;
    if (data_020dedc4 != NULL) {
        M2C_FIELD(*data_020dedc4, M2C_UNK(**)(), 4)(data_020dedc4);
    }
    data_020dedc4 = NULL;
    if (data_020dedb4 != NULL) {
        M2C_FIELD(*data_020dedb4, M2C_UNK(**)(), 4)(data_020dedb4);
    }
    data_020dedb4 = NULL;
    if (data_020dedb8 != NULL) {
        M2C_FIELD(*data_020dedb8, M2C_UNK(**)(), 4)(data_020dedb8);
    }
    data_020dedb8 = NULL;
    data_020dedbc = 0;
    data_020dedd4 = 0;
    data_020dedb0 = 0;
    data_020dedc0 = 0;
}
