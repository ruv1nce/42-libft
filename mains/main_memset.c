#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	b[] = {"eeeeeeeeee"};
	char	d[] = {"eeeeeeeeee"};
	int		c;
	size_t	len;
	void	*x;
	void	*z;

	if (argc == 3)
	{
		c = argv[1][0];
		len = atoi(argv[2]);
		x = memset(b, c, len);
		z = ft_memset(d, c, len);
		printf("orig %s\n", x);
		printf("ftft %s\n", z);
	}
}
