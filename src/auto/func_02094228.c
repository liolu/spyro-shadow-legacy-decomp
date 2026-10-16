/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
typedef struct OSiAlarm OSAlarm;
typedef enum {
    OS_TIMER_0 = 0,
    OS_TIMER_1 = 1,
    OS_TIMER_2 = 2,
    OS_TIMER_3 = 3
} OSTimer;
extern void func_02094038(s32 timerNum);
typedef u64 OSTick;
typedef void (*OSAlarmHandler)(void *);
struct OSiAlarm {
    OSAlarmHandler handler;
    void *arg;

    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;

    OSTick period;
    OSTick start;
};
struct OSiAlarmQueue {
    OSAlarm *head;
    OSAlarm *tail;
};
extern void func_02094228(void);
typedef u32 OSIrqMask;
extern OSIrqMask func_02091c78(OSIrqMask mask);
extern u16 data_020fb1ec;
extern struct OSiAlarmQueue data_020fb1f0;

/* Os_InitializeAlarm from https://github.com/RonyxDumb/mkds src/arm9/0200fb28_Os_InitializeAlarm.c (license: none), reused by
 * tools/donor_match.py */
void func_02094228(void) {
    if (!data_020fb1ec) {
        data_020fb1ec = 1;

        func_02094038(OS_TIMER_1);

        data_020fb1f0.head = ((void *) 0);
        data_020fb1f0.tail = ((void *) 0);

        (void) func_02091c78((1UL << 4));
    }
}
