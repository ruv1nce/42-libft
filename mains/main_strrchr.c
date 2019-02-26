#include "libft.h"
#include <stdio.h>

int	main()
{
	char	*s1 = "dudedededdd";
	char	*s2 = "fuckoff";
	char	c1 = 'e';
	char	c2 = '\0';

	printf("orig %s\n", strrchr(s1, c1));
	printf("ftft %s\n", ft_strrchr(s1, c1));
	printf("orig %p\n", strrchr(s1, c1));
	printf("ftft %p\n", ft_strrchr(s1, c1));
	printf("orig %s\n", strrchr(s2, c2));
	printf("ftft %s\n", ft_strrchr(s2, c2));
	printf("orig %p\n", strrchr(s2, c2));
	printf("ftft %p\n", ft_strrchr(s2, c2));
}
