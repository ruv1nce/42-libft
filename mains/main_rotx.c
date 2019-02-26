#include <stdio.h>
#include "libft.h"

int	main()
{
	printf("%s\n", ft_rotx("abcdefghijklmnopqrstuvwxyz", 0));
	printf("%s\n", ft_rotx("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 0));
	printf("%s\n", ft_rotx("abcdefghijklmnopqrstuvwxyz", 1));
	printf("%s\n", ft_rotx("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 1));
	printf("%s\n", ft_rotx("abcdefghijklmnopqrstuvwxyz", 13));
	printf("%s\n", ft_rotx("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 13));
	printf("%s\n", ft_rotx("abcdefghijklmnopqrstuvwxyz", 26));
	printf("%s\n", ft_rotx("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26));
	printf("%s\n", ft_rotx("abcdefghijklmnopqrstuvwxyz", -20));
	printf("%s\n", ft_rotx("ABCDEFGHIJKLMNOPQRSTUVWXYZ", -20));
	printf("%s\n", ft_rotx("abcdefghijklmnopqrstuvwxyz", 500));
	printf("%s\n", ft_rotx("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 500));
}
