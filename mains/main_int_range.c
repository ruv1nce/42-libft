#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	int	*tab;
	int	i;
	int start;
	int end;
	int	size;

	if (argc == 3)
	{
		start = atoi(argv[1]);
		end = atoi(argv[2]);
		tab = ft_int_range(start, end);
		i = 0;
		if (start > end)
			size = start - end + 1;
		else
			size = end - start + 1;
		while (i < size)
		{
			printf("%i ", tab[i]);
				i++;
		}
	}
}
