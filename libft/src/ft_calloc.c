#include "libft.h"

#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (nmemb && size > SIZE_MAX / nmemb)
		return (NULL);
	res = malloc(nmemb * size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, nmemb * size);
	return (res);
}
