/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0208630c();                            /* extern */
M2C_UNK func_02091090();                            /* extern */

void func_02089074(void) {
    func_02091090();
    func_0208630c();
    *(s32 *) 0x04000600 = (*(s32 *) 0x04000600 & ~0xC0000000) | 0x80000000;
}
