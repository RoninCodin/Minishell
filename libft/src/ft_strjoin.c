#include "libft.h"

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*res;
	char	*r;

	len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc((len + 1) * sizeof (char));
	r = res;
	if (r == NULL)
		return (NULL);
	while (*s1)
	{
		*r++ = *s1++;
	}
	while (*s2)
	{
		*r++ = *s2++;
	}
	*r = '\0';
	return (res);
}
