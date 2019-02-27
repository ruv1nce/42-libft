#ifndef GNL_H
# define GNL_H

# include "libft.h"
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# define BUFF_SIZE 10

int	get_next_line(const int fd, char **line);

#endif
