#include "libft.h"
#include <stdio.h>

int main()
{
	char    *s1 = "oh no not the empty string !";
	char    *s2 = "";
	size_t  max = 0;
	printf("orig %s\n", strnstr(s1, s2, max));
	printf("ftft %s\n", ft_strnstr(s1, s2, max));

}
