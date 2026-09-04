#include "libft.h"

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*res;

	res = malloc(ft_strlen(s) + 1);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s, ft_strlen(s) + 1);
	return (res);
}
