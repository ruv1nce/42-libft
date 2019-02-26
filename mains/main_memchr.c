#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

int	main()
{
	char	*str = "abcdefgh";
	int		c = 101;
	size_t	n = 20;
	void	*ptr;

	ptr = memchr(str, c, n);
	write(1, "orig ", 5);
	write(1, ptr, 1);
	write(1, "\n", 1);
	ft_memchr(str, c, n);
	write(1, "ftft ", 5);
	write(1, ptr, 1);
	write(1, "\n", 1);
}
