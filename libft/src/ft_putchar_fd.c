#include "libft.h"

#include <unistd.h>

ssize_t	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
