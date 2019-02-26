#include <stdio.h>
#include "libft.h"

int	main()
{
	printf("%i\n", ft_wordcnt("  one   two  three   ", ' '));
	printf("%i\n", ft_wordcnt("one**two three**", '*'));
	printf("%i\n", ft_wordcnt("one   two  three", ' '));
	printf("%i\n", ft_wordcnt("one", ' '));
	printf("%i\n", ft_wordcnt("", 'a'));
}
