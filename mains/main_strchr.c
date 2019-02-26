#include "libft.h"
#include <stdio.h>

int	main()
{
	char	*s1 = "dude";
	char	*s2 = "fuckoff";
	char	c1 = 'e';
	char	c2 = '\0';

	printf("orig %s\n", strchr(s1, c1));
	printf("ftft %s\n", ft_strchr(s1, c1));
	printf("orig %p\n", strchr(s1, c1));
	printf("ftft %p\n", ft_strchr(s1, c1));
	printf("orig %s\n", strchr(s2, c2));
	printf("ftft %s\n", ft_strchr(s2, c2));
	printf("orig %p\n", strchr(s2, c2));
	printf("ftft %p\n", ft_strchr(s2, c2));
}
