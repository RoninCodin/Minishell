#ifndef UTILS_H
# define UTILS_H

# include "redirect_types.h"

t_redir			*_new_redir(void);
t_redir_error	_get_src_dest(t_redir_src *d, t_redir_src *r);

#endif // !UTILS_H
