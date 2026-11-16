/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204e4ac();         /* extern */
s32 func_0204f15c();                     /* extern */
extern s32 data_020c3b04;
extern s32 data_020c3b0c;
extern s32 data_020c3b40;

void func_0204f648(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r1;
    void *temp_ip;
    void *temp_ip_2;
    void *temp_r3;

    var_r1  = arg1;
    temp_r4 = var_r1 * 0x48;
    temp_r2 = M2C_FIELD((data_020c3b0c + temp_r4), s32 *, 0x1C);
    if (temp_r2 != 0) {
        var_r1 = M2C_FIELD((data_020c3b40 + (temp_r2 << 6)), s32 *, 0x3C);
    }
    temp_r0 = func_0204f15c(arg0, var_r1);
    if (temp_r0 != -1) {
        temp_r4_2 = temp_r0 * 0x24;
        temp_ip   = M2C_FIELD(arg0, void **, 0x80);
        func_0204e4ac(arg0 + 0x88, M2C_FIELD((data_020c3b04 + temp_r4_2), s32 *, 4),
                      temp_ip + M2C_FIELD((temp_ip + M2C_FIELD(temp_ip, u16 *, 0xE)), s32 *, 0xC));
        if (((u32) (M2C_FIELD(arg0, s32 *, 0x14) << 0x1B) >> 0x1F) != 1) {
            return;
        }
        temp_ip_2 = M2C_FIELD(arg0, void **, 0x80);
        func_0204e4ac(arg0 + 0xA0, M2C_FIELD((data_020c3b04 + temp_r4_2), s32 *, 4),
                      temp_ip_2 + M2C_FIELD((temp_ip_2 + M2C_FIELD(temp_ip_2, u16 *, 0xE)), s32 *, 0xC));
        return;
    }
    temp_r2_2 = *(s32 *) (data_020c3b40 + (M2C_FIELD((data_020c3b0c + temp_r4), s32 *, 0x1C) << 6));
    if (temp_r2_2 == 0) {
        return;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x80);
    func_0204e4ac(arg0 + 0x88, M2C_FIELD(((temp_r2_2 * 0x24) + data_020c3b04), s32 *, 4),
                  temp_r3 + M2C_FIELD((temp_r3 + M2C_FIELD(temp_r3, u16 *, 0xE)), s32 *, 0xC));
}
