#include <stdio.h>
#include <math.h>

int	ft_sqrt_floor(int x);
int ft_sqrt(int n, int mode);

int	main(void)
{
	int	x;

	x = -1;
	while (++x < 51)
	{
		printf("sqrt0 %i, %i\n", x, ft_sqrt(x, 0));
		printf("sqrt1 %i, %i\n", x, ft_sqrt(x, 1));
		printf("libc  %i, %i\n\n", x, (int)sqrt((double)x));
	}
}
