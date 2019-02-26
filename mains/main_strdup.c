#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*x;
	char	*y;
	if (argc == 2)
	{
		x = strdup(*(argv + 1));
		y = ft_strdup(*(argv + 1));
		printf("orig %s\n", x);
		printf("ftft %s\n", y);
		free(x);
		free(y);
	}
}
