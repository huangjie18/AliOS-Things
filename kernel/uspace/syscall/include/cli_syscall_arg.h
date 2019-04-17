/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#ifndef CLI_SYSCALL_ARG_H
#define CLI_SYSCALL_ARG_H

typedef struct {
    const struct cli_command *cmd;
} cli_register_command_syscall_arg_t;

typedef struct {
    const struct cli_command *cmd;
} cli_unregister_command_syscall_arg_t;

typedef struct {
    const struct cli_command *cmd;
    int                       num_cmds;
} cli_register_commands_syscall_arg_t;

typedef struct {
    const struct cli_command *cmd;
    int                       num_cmds;
} cli_unregister_commands_syscall_arg_t;

#endif /* CLI_SYSCALL_ARG_H */
