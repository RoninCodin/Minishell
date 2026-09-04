#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	res;

	res = (ft_strlen(src));
	if (!size)
		return (res);
	i = 1;
	while (*src && size > 0 && i < size)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = 0;
	return (res);
}
