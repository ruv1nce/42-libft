#include <stdio.h>
#include "libft.h"

int	main()
{
	int const	i = 777;
	size_t		size;
	t_list		*a;

	size = 4;
	a = ft_lstnew(&i, size);
	printf("%i\n%lu\n", *(int *)a->content, a->content_size);
}
