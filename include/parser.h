#ifndef PARSER_H
# define PARSER_H

# include "parse_tree.h"

t_parse_node	*get_parse_tree(char *input);
void			free_parse_tree(t_parse_node **root);

#endif
