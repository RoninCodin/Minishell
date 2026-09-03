#include "env.h"
#include "libft.h"
#include "redirect.h"
#include "redirect_types.h"
#include "utils.h"

#include <errno.h>
#include <stddef.h>
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static char	*_ms_readline(char **dest, const char *prompt)
{
	if (*dest)
		free(*dest);
	*dest = readline(prompt);
	return (*dest);
}

int	ms_hear_doc(const char *stopword)
{
	t_pipe		hear_pipe;
	const char	*prompt;
	char		*line;

	if (pipe(hear_pipe.a))
	{
		ft_print_err(strerror(errno), 2, "minishell", "pipe");
		return (-1);
	}
	prompt = ms_getenv("PS2");
	if (!prompt)
		prompt = "> ";
	line = NULL;
	while (_ms_readline(&line, prompt)
		&& !ft_strnstr(line, stopword, ft_strlen(line)))
		ft_putendl_fd(line, hear_pipe.write);
	if (line)
		free(line);
	close(hear_pipe.write);
	new_fd(hear_pipe.read);
	return (hear_pipe.read);
}
