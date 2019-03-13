#include <stdio.h>

int	ft_sqrt_floor(int x);

int	main(void)
{
	int	x;

	x = -1;
	while (++x < 51)
		printf("%i, %i\n", x, ft_sqrt_floor(x));
}
