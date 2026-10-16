/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_02094304(void);
extern u32 func_02094318(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_020956d4(void);
extern UnkSndCommand *data_020fb25c;
extern UnkSndCommand *data_020fb24c;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_020956d4(void) {
    UnkSndCommand *cmd;
    u32 enabled = func_02094304();

    cmd = data_020fb24c;
    if (cmd == 0) {
        func_02094318(enabled);
        return 0;
    }
    data_020fb24c = cmd->next;
    if (data_020fb24c == 0) {
        data_020fb25c = 0;
    }
    func_02094318(enabled);
    return cmd;
}
