#include <stdio.h>

#include "../libft.h"

int	main()
{
	char	*s1 = "first";
	char	*s2 = "second";
	char	*s3 = NULL;
	char	*s4 = NULL;

	printf("1st2nd: %s\n", ft_strjoin(s1, s2));
	printf("1stnul: %s\n", ft_strjoin(s1, s3));
	printf("nul2nd: %s\n", ft_strjoin(s3, s2));
	printf("nulnul: %s\n", ft_strjoin(s3, s4));
}
