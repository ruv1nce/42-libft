#include "libft.h"
#include <stdio.h>

int	main()
{
	printf("orig %i\n", strncmp("q", "a", 0));
	printf("ftft %i\n", ft_strncmp("abc", "a", 0));
}
