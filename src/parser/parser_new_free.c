#include "libft.h"
#include "parse_tree.h"

#include <stddef.h>
#include <stdlib.h>

t_parse_node	*new_node(size_t n_children)
{
	t_parse_node	*new;

	new = ft_calloc(1, sizeof(t_parse_node));
	if (!new)
		return (NULL);
	if (n_children == 0)
		return (new);
	new->children = ft_calloc(n_children, sizeof(t_parse_node));
	if (new->children)
		return (new);
	free(new);
	return (NULL);
}

void	free_parse_tree(t_parse_node **root)
{
	size_t			i;
	t_parse_node	*node;

	if (!root || !*root)
		return ;
	i = 0;
	node = *root;
	while (node->children && node->children[i])
		free_parse_tree(&node->children[i++]);
	if (node->tok.type == MS_TOK_IDENTIFIER)
		free(node->tok.id.value);
	if (node->children)
		free(node->children);
	free(node);
	*root = NULL;
}
