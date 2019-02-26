#include <stdio.h>
#include "libft.h"

int	main()
{
	printf("%i\n", ft_is_powof2(0));
	printf("%i\n", ft_is_powof2(1));
	printf("%i\n", ft_is_powof2(2));
	printf("%i\n", ft_is_powof2(128));
	printf("%i\n", ft_is_powof2(127));
	printf("%i\n", ft_is_powof2(2147483648));
	printf("%i\n", ft_is_powof2(4294967295));
}
