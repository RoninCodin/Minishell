#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	v;

	p = (unsigned char *) s;
	v = (unsigned char) c;
	while (n-- > 0)
	{
		if (*p == v)
			return ((void *) p);
		p++;
	}
	return (NULL);
}
