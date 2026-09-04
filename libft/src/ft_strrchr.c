#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	c = c & 0xff;
	res = NULL;
	while (*s)
	{
		if (*s == (char) c)
			res = (char *)s;
		s++;
	}
	if (!c)
		return ((char *) s);
	return (res);
}
