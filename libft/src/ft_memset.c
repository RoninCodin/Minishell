#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	v;

	p = (unsigned char *)s;
	v = (unsigned char) c;
	while (n > 0)
	{
		*p++ = v;
		n--;
	}
	return (s);
}
