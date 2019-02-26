#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("orig %i\n", strcmp(*(argv + 1), *(argv + 2)));
		printf("orig %i\n", ft_strcmp(*(argv + 1), *(argv + 2)));
	}
}
