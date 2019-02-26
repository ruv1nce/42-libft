#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str1[10] = "fuck";
	char	str2[10] = "fuck";
	char	*s11 = &str1[0];
	char	*s12 = &str2[0];
	char	*s2 = "off";

	printf("orig %s\n", strcat(s11, s2));
	printf("ftft %s\n", ft_strcat(s12, s2));

}
