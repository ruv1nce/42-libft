#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str1[10] = "fuck";
	char	str2[10] = "fuck";
	char	*s11 = &str1[0];
	char	*s12 = &str2[0];
	char	*s2 = "off";
	size_t	n;

	n = 2;
	printf("orig %s\n", strncat(s11, s2, n));
	printf("ftft %s\n", ft_strncat(s12, s2, n));

}
