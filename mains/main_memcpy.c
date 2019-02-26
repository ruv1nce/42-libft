#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	dst1[] = "eeeeeeeeee";
	char	dst2[] = "eeeeeeeeee";
	char	src[] = "FFFFFFF";
	size_t	len;
	void	*x;
	void	*z;

	if (argc == 2)
	{
		len = atoi(argv[1]);
		x = memcpy(dst1, src, len);
		z = ft_memcpy(dst2, src, len);
		printf("orig %s\n", x);
		printf("ftft %s\n", z);
	}
}
