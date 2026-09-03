#ifndef UTILS_H
# define UTILS_H

# include "command.h"
# include "parse_tree.h"

_Noreturn void	cmd_exec(t_cmd_params params);
int				find_bin(char *dest, const char *name);
int				is_rel_path(const char *str);
char			**make_argv(t_parse_node *node);

int				cmd_input_redir(t_cmd_params params, t_parse_node *node);
int				cmd_hear_doc(t_cmd_params params, t_parse_node *node);
int				cmd_output_redir(t_cmd_params params, t_parse_node *node);
int				cmd_output_append(t_cmd_params params, t_parse_node *node);

#endif
