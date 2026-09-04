#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	if (len >= ft_strlen(big))
		len = ft_strlen(big);
	little_len = ft_strlen(little);
	while (len >= little_len)
	{
		if (!ft_strncmp(big, little, little_len))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
