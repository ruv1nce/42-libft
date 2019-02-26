#include <stdio.h>
#include "libft.h"

int	main()
{
	int	n;

	n = 456;
	printf("%s\n", ft_itoa(n));
	n = -456;
	printf("%s\n", ft_itoa(n));
	n = 0;
	printf("%s\n", ft_itoa(n));
	n = 2147483647;
	printf("%s\n", ft_itoa(n));
	n = -2147483648;
	printf("%s\n", ft_itoa(n));
	printf("%s\n", ft_itoa(-2147483649));
}
