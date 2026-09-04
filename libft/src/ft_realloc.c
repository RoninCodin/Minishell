#include "libft.h"

#include <stdlib.h>

void	*ft_realloc(void *ptr, size_t new_size, size_t old_size)
{
	void	*res;

	res = malloc(new_size);
	if (!res)
		return (ptr);
	ft_memcpy(res, ptr, old_size);
	free(ptr);
	return (res);
}
