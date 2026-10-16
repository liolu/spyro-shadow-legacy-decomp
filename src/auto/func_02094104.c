/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u64 vu64;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern void func_02091d2c(u32 timerNo, void (*func)(void *), void *arg);
extern BOOL data_020fb1e0;
extern vu64 data_020fb1e4;
extern void func_02094104(void);

/* func_02079b88 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_tick.c (license: none), reused by
 * tools/donor_match.py */
void func_02094104(void) {
    data_020fb1e4++;

    if (data_020fb1e0) {
        (*(vu16 *) 0x04000102) = 0;
        (*(vu16 *) 0x04000100) = 0;
        (*(vu16 *) 0x04000102) = 0xc1;
        data_020fb1e0          = 0;
    }

    func_02091d2c(0, (void (*)(void *)) func_02094104, 0);
}
