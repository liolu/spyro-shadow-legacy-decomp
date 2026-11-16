/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_020599ec(void *arg0) {
    void **temp_r2;
    void *temp_r2_2;

    temp_r2 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r2 != NULL) {
        *temp_r2 = M2C_FIELD(arg0, void **, 0);
    }
    temp_r2_2 = M2C_FIELD(arg0, void **, 0);
    if (temp_r2_2 != NULL) {
        M2C_FIELD(temp_r2_2, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    }
    return arg0;
}
