#include "lexer.h"
#include "libft.h"

#include <stdlib.h>

t_lex_tok	*lx_default_tok(void)
{
	t_lex_tok	*res;

	res = ft_calloc(1, sizeof(t_lex_tok));
	if (!res)
		return (NULL);
	return (res);
}

void	free_lex_node(void *node)
{
	t_lex_tok	*tok;

	tok = node;
	if (tok->id)
		free(tok->id);
	free(node);
}

void	free_lex_list(t_lex_tok **lex_list)
{
	ft_lstclear((t_list **) lex_list, free_lex_node);
}
