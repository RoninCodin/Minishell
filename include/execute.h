#include "command.h"
#include "parse_tree.h"

int		exec_parsetree(t_parse_node	**pt);
void	setup_sighandlers(void);
void	reset_signal(void);
void	forward_sigint(t_cmd_params *params);
int		ms_is_interactive(void);
