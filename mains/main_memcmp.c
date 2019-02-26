#include "libft.h"
#include <stdio.h>

int	main()
{
	unsigned char	str1[] = "abcdefgh";
	unsigned char	*s1 = &str1[0];
	unsigned char	str2[] = "abcdefgh";
	unsigned char	*s2 = &str2[0];
	size_t			n = 8;

	printf("orig %i\n", memcmp(s1, s2, n));
	printf("ftft %i\n", ft_memcmp(s1, s2, n));
}
