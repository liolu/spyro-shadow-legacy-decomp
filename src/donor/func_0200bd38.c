/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020729b0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/gfd/gfd_lnkvram.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkLnkVramBlock {
    u32 addr;
    u32 szByte;
    struct UnkLnkVramBlock *pPrev;
    struct UnkLnkVramBlock *pNext;
} UnkLnkVramBlock;
typedef struct {
    UnkLnkVramBlock *pFreeList;
} UnkLnkVramMan;
extern BOOL func_0200bd38(UnkLnkVramMan *pMgr, UnkLnkVramBlock **ppBlockPool, u32 *pRetAddr, u32 szByte);
extern BOOL func_0200b74c(UnkLnkVramMan *pMgr, UnkLnkVramBlock **ppBlockPool, u32 *pRetAddr, u32 szByte, u32 alignment);
BOOL func_0200bd38(UnkLnkVramMan *pMgr, UnkLnkVramBlock **ppBlockPool, u32 *pRetAddr, u32 szByte) {
    return func_0200b74c(pMgr, ppBlockPool, pRetAddr, szByte, 0);
}
BOOL func_0200b74c(UnkLnkVramMan *pMgr, UnkLnkVramBlock **ppBlockPool, u32 *pRetAddr, u32 szByte, u32 alignment);
