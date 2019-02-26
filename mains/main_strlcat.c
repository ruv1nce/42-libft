#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str[10];
	char	*dst = &str[0];
	char	*src = "dudester";
	size_t	dstsize;
	int		i;

	dstsize = 0;
	while (dstsize < 13)
	{
		str[0] = 'f';
		str[1] = 'u';
		str[2] = 'c';
		str[3] = 'k';
		i = 4;
		while (i < 10)
		{
			str[i] = '\0';
			i++;
		}
		printf("dstsize %zu\n", dstsize);
		printf("orig %zu\n", strlcat(dst, src, dstsize));
		printf("%s\n", dst);

		str[0] = 'f';
		str[1] = 'u';
		str[2] = 'c';
		str[3] = 'k';
		i = 4;
		while (i < 10)
		{
			str[i] = '\0';
			i++;
		}
		printf("dstsize %zu\n", dstsize);
		printf("ftft %zu\n", ft_strlcat(dst, src, dstsize));
		printf("%s\n", dst);
		printf("-------\n");
		dstsize++;
	}
}
