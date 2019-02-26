#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	dst1[] = "0123456789";
	char	dst2[] = "0123456789";
	char	src[] = "FFFFFFFFFFF";
	int		c = 'A';
	size_t	len;
	void	*x;
	void	*z;

	if (argc == 2)
	{
		len = atoi(argv[1]);
		x = memccpy(dst1, src, c, len);
		z = ft_memccpy(dst2, src, c, len);
		printf("orig %s\n", x);
		printf("ftft %s\n", z);
	}
}
