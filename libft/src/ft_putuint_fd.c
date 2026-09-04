#include "libft.h"

ssize_t	ft_putuint_fd(unsigned int n, int fd)
{
	ssize_t		res;

	res = 0;
	if (n / 10)
		res += ft_putnbr_fd(n / 10, fd);
	res += ft_putchar_fd((n % 10) + '0', fd);
	return (res);
}
