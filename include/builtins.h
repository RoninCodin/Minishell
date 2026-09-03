#ifndef BUILTINS_H
# define BUILTINS_H

# include "command.h"

int	is_builtin(const char *name);
int	do_builtin(const char *builtin, t_cmd_params *params);

#endif	// BUILTINS_H
