#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("alpha %i\n", ft_isalpha(argv[1][0]));
		printf("alnum %i\n", ft_isalnum(argv[1][0]));
		printf("digit %i\n", ft_isdigit(argv[1][0]));
		printf("print %i\n", ft_isprint(argv[1][0]));
		printf("ascii %i\n", ft_isascii(argv[1][0]));
		printf("upper %c\n", ft_toupper(argv[1][0]));
		printf("lower %c\n", ft_tolower(argv[1][0]));
	}
}
