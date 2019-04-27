#include "../libft.h"
#include <stdio.h>

int		main()
{
	printf("%s\n", ft_itoa_base(123, 10, 1));
	printf("%s\n", ft_itoa_base(-123, 10, 1));
	printf("%s\n", ft_itoa_base(123, 2, 1));
	printf("%s\n", ft_itoa_base(123, 8, 1));
	printf("%s\n", ft_itoa_base(123, 16, 1));
	printf("%s\n", ft_itoa_base(123, 16, 0));
	printf("%s\n", ft_itoa_base(123, 16, 1));
	printf("\n");
	printf("%s\n", ft_itoa_base(1234567890, 10, 1));
	printf("%s\n", ft_itoa_base(-1234567890, 10, 1));
	printf("%s\n", ft_itoa_base(1234567890, 2, 1));
	printf("%s\n", ft_itoa_base(1234567890, 8, 1));
	printf("%s\n", ft_itoa_base(1234567890, 16, 1));
	printf("%s\n", ft_itoa_base(1234567890, 16, 0));
	printf("%s\n", ft_itoa_base(1234567890, 16, 1));
	printf("\n");
	printf("%s\n", ft_itoa_base_u(1234567890, 10, 1));
	printf("%s\n", ft_itoa_base_u(1234567890, 2, 1));
	printf("%s\n", ft_itoa_base_u(1234567890, 8, 1));
	printf("%s\n", ft_itoa_base_u(1234567890, 16, 1));
	printf("%s\n", ft_itoa_base_u(1234567890, 16, 0));
	printf("%s\n", ft_itoa_base_u(1234567890, 16, 1));
}
