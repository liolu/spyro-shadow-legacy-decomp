/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0204e42c(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020c3b04;

s32 func_0204eed4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 temp_r4_2;
    void *temp_ip;
    void *temp_ip_2;
    void *temp_r0;
    void *temp_r0_2;

    if (arg2 != 9) {
        temp_ip = M2C_FIELD(arg0, void **, 0x80);
        temp_r4 = arg1 * 0x24;
        temp_r0_2 =
            (void *) func_0204e42c(arg0 + 0x88, M2C_FIELD((data_020c3b04 + temp_r4), s32 *, 4),
                                   (s32) (temp_ip + M2C_FIELD((temp_ip + M2C_FIELD(temp_ip, u16 *, 0xE)), s32 *, 0xC)));
        M2C_FIELD((data_020c3b04 + temp_r4), s32 *, 0x1C) =
            (s32) (M2C_FIELD(M2C_FIELD(temp_r0_2, void **, 8), u16 *, 4) << 0xC);
        return (s32) temp_r0_2;
    }
    temp_ip_2 = M2C_FIELD(arg0, void **, 0x80);
    temp_r4_2 = arg1 * 0x24;
    temp_r0 =
        (void *) func_0204e42c(arg0 + 0xA0, M2C_FIELD((data_020c3b04 + temp_r4_2), s32 *, 4),
                               (s32) (temp_ip_2 + M2C_FIELD((temp_ip_2 + M2C_FIELD(temp_ip_2, u16 *, 0xE)), s32 *, 0xC)));
    M2C_FIELD((data_020c3b04 + temp_r4_2), s32 *, 0x1C) = (s32) (M2C_FIELD(M2C_FIELD(temp_r0, void **, 8), u16 *, 4) << 0xC);
    return (s32) temp_r0;
}
