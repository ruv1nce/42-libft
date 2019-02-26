#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	**ptr;
	
	if (argc == 3)
	{
		ptr = ft_strsplit(argv[1], argv[2][0]);
		while (*ptr)
		{
			printf("%s\n", *ptr);
			ptr++;
		}
	}
	else
		printf("usage: ./bin \"string\" 'char'\n");
}
