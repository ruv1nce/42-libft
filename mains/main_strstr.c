#include "libft.h"
#include <stdio.h>

int main()
{
	char	*s1 = "FF";
	char	*s2 = "see FF your FF return FF now FF";
	printf("1 orig %s\n", strstr(s1, s2));
	printf("1 ftft %s\n", ft_strstr(s1, s2));

	char    *s3 = "MZIRIBMZIRIBMZP";
	char    *s4 = "MZIRIBMZP";
	printf("2 orig %s\n", strstr(s3, s4));
	printf("2 ftft %s\n", ft_strstr(s3, s4));

	char    *s5 = "FF";
	char    *s6 = "see F your F return FF now FF";
	printf("3 orig %s\n", strstr(s5, s6));
	printf("3 ftft %s\n", ft_strstr(s5, s6));

	char    *s7 = "FF";
	char    *s8 = "see F your F return F now FF";
	printf("4 orig %s\n", strstr(s7, s8));
	printf("4 ftft %s\n", ft_strstr(s7, s8));

	char    *s9 = "aaabbbaaabbb";
	char    *s10 = "abbaaab";
	printf("5 orig %s\n", strstr(s9, s10));
	printf("5 ftft %s\n", ft_strstr(s9, s10));

	char    *s11 = "aaabbbaaabbb";
	printf("6 orig %s\n", strstr(s11, s11));
	printf("6 ftft %s\n", ft_strstr(s11, s11));
}
