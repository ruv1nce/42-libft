#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	arr[] = "abcdefghij";
	char	*src = &arr[0];
	char	*dst = &arr[3];
	char	arr2[] = "abcdefghij";
	char	*src2 = &arr2[0];
	char	*dst2 = &arr2[3];
	size_t	len;
	void	*x;
	void	*z;

	if (argc == 2)
	{
		len = atoi(argv[1]);
		x = memmove(dst, src, len);
		z = ft_memmove(dst2, src2, len);
		printf("orig %s\n", x);
		printf("ftft %s\n", z);
	}
}
