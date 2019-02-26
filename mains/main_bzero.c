#include <unistd.h>
#include <strings.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	b[] = {"eeeeeeeeee"};
	char	d[] = {"eeeeeeeeee"};
	size_t	n;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		bzero(b, n);
		ft_bzero(d, n);
		write(1, "orig ", 5);
		write(1, &b, 10);
		write(1, "\n", 1);
		write(1, "ftft ", 5);
		write(1, &d, 10);
		write(1, "\n", 1);
	}
}
