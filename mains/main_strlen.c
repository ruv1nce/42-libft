#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%zu\n", ft_strlen(*(argv + 1)));
	}
}
