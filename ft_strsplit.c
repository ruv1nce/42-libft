/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 19:28:57 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/24 20:36:41 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**ptr;
	int		flag;
	size_t	word;
	size_t	i;
	size_t	start;

	if (!s || !(ptr = ft_memalloc(sizeof(char *) * (ft_wordcnt(s, c) + 1))))
		return (NULL);
	flag = 0;
	i = 0;
	word = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] == c && flag)
			ptr[word++] = ft_strsub(s, start, i - start);
		if (!flag && s[i] != c)
			start = i;
		flag = (s[i] == c) ? 0 : 1;
		i++;
	}
	if (flag)
		ptr[word++] = ft_strsub(s, start, i - start);
	ptr[word] = NULL;
	return (ptr);
}
