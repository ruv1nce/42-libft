#include "libft.h"
#include <stdio.h>

int	main()
{
	char	**ptr;
	char *s = "olol ";

	ptr = ft_strsplit(s, ' ');
	while (*ptr)
	{
		printf("%s\n", *ptr);
		ptr++;
	}
}
