#include "libft.h"
#include <stdio.h>

int	main()
{
	char	*n = "\e06050";
	char	m[40] = "99999999999999999999999999";
	char	o[40] = "-99999999999999999999999999";
	printf("- nonprint -\n");
	printf("orig %i\n", atoi(n));
	printf("ftft %i\n", ft_atoi(n));
	printf("- overlong max -\n");
	printf("orig %i\n", atoi(m));
	printf("ftft %i\n", ft_atoi(m));
	printf("- overlong min -\n");
	printf("orig %i\n", atoi(o));
	printf("ftft %i\n", ft_atoi(o));
}
