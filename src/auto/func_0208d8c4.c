/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02095644(u8, s32);                     /* extern */
M2C_UNK func_0209565c(u8);                          /* extern */
M2C_UNK func_0208d834(void *);                      /* extern */

void func_0208d8c4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_02095644(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_0209565c(M2C_FIELD(arg0, u8 *, 0x3C));
    func_0208d834(arg0);
}
