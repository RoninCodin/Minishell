#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (src < dest && src + n >= dest)
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
		return (dest);
	}
	return (ft_memcpy(dest, src, n));
}
