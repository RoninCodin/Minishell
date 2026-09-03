#include "libft.h"

#include <unistd.h>

int	_is_option(const char *arg)
{
	return (arg[0] == '-' && arg[1] != '\0');
}

int	_set_wstatus(int exit_status, int sig)
{
	return ((exit_status << 8) | sig);
}

const char	*_invalid_option(const char *arg, const char *valid_opts)
{
	static char	buff[3] = "-0";

	while (*++arg)
	{
		if (!ft_strchr(valid_opts, *arg))
		{
			buff[1] = *arg;
			return (buff);
		}
	}
	return (NULL);
}
