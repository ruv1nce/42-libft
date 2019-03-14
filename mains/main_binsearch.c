#include <stdio.h>

int	ft_binsearch(int *arr, int num, int size);

int main()
{
	int	arr[10] = {-45, -40, -3, -3, 0, 0, 34, 456, 900, 10000};

	printf("%i\n", ft_binsearch(arr, -55, 10));
	printf("%i\n", ft_binsearch(arr, -45, 10));
	printf("%i\n", ft_binsearch(arr, -10, 10));
	printf("%i\n", ft_binsearch(arr, -3, 10));
	printf("%i\n", ft_binsearch(arr, 0, 10));
	printf("%i\n", ft_binsearch(arr, 15, 10));
	printf("%i\n", ft_binsearch(arr, 34, 10));
	printf("%i\n", ft_binsearch(arr, 100, 10));
	printf("%i\n", ft_binsearch(arr, 456, 10));
	printf("%i\n", ft_binsearch(arr, 900, 10));
	printf("%i\n", ft_binsearch(arr, 10000, 10));
}
