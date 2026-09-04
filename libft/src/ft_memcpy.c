#include "libft.h"

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (dest == src)
		return (dest);
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	while (n--)
		*d++ = *s++;
	return (dest);
}
