#ifndef ENV_UTILS_H
# define ENV_UTILS_H

# include "hashmap.h"

int			valid_envvar(const char *var);
void		free_env(void);
const char	*_exit_status(const char *value);
void		_sort(char **tab);
char		*_node_to_str(t_hm_node *node, char **dest, int unquoted);

#endif	// ENV_UTILS_H
