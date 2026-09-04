#include "libft.h"

ssize_t	ft_putendl_fd(char *s, int fd)
{
	ssize_t	res;

	if (!s)
		return (0);
	res = ft_putstr_fd(s, fd);
	res += ft_putchar_fd('\n', fd);
	return (res);
}
