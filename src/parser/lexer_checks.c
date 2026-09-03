#include "libft.h"

#define METACHARS	" \t\n|&;()<>"
#define WS			" \t\n"

int	is_meta(const char c)
{
	return (c && !!ft_strchr(METACHARS, c));
}

int	is_quote(const char c)
{
	return (c && !!ft_strchr("'\"", c));
}

int	is_ws(const char c)
{
	return (c && !!ft_strchr(WS, c));
}

char	*skip_ws(char *s)
{
	while (is_ws(*s))
		s++;
	return (s);
}
