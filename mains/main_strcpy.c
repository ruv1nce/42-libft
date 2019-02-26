#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("orig %s\n", strcpy(*(argv + 1), *(argv + 2)));
		printf("ftft %s\n", ft_strcpy(*(argv + 1), *(argv + 2)));
	}
}
