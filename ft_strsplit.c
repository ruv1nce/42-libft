#include "libft.h"

static char **wordptrs(char **str, char c, int words)
{
	char	**ptr;
	int		flag;
	int		i;

	if (!(ptr = malloc((words + 1) * sizeof(char *))))
		return (NULL);
	flag = 0;
	i = 0;
	while (i < words)
	{
		if (*str == c && flag == 1)
		{
			flag = 0;
			*str = '\0';
		}
		else if (flag == 0)
		{
			flag = 1;
			*(ptr + i) = str;
		}
		i++;
	}
	*(ptr + i) = NULL;
	return (ptr);
}

char		**ft_strsplit(char const *s, char c)
{
	char	*str;

	if (!s)
		return (NULL);
	if (!(str = malloc(ft_strlen(s) + 1)))
		return (NULL);
	str = ft_strcpy(str, s);
	return (wordptrs(&str, c, ft_wordcnt(s, c)));
}
