#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long int	res;
	int			sign;

	while (*nptr && ft_strchr("\x09\x0A\x0B\x0C\x0D\x20", *nptr))
		nptr++;
	res = 0;
	sign = 1;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		res *= 10;
		res += *nptr & ~0x30;
		nptr++;
	}
	return ((int)(res * sign));
}
