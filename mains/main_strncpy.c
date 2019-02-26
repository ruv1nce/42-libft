#include "libft.h"
#include <stdio.h>

int	main()
{
	char    *src = "len\0AAAAAAAAAAAA";
	char    dst1[] = "BBBBBBBBBBBBBBBBBBBB";
	char    dst2[] = "BBBBBBBBBBBBBBBBBBBB";
	size_t  len = strlen(dst1);

	printf("%s\n", strncpy(dst1, src, 7));
	printf("%s\n", ft_strncpy(dst2, src, 7));
	for (size_t i = 0; i < len; i++)
		if (dst1[i] != dst2[i])
			printf("fail\n");
}
