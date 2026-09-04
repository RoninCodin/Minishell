#include "libft.h"

#include <unistd.h>

ssize_t	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return (ft_putstr_fd("(null)", fd));
	return (write(fd, s, ft_strlen(s)));
}
