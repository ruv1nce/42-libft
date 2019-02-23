/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 01:51:07 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/23 03:31:02 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;
	char	*needorig;
	size_t	tmp;

	ptr = NULL;
	needorig = (char *)needle;
	tmp = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (*haystack == *needle)
		{
			ptr = (char *)haystack;
			while (*haystack == *needle && len)
			{
				haystack++;
				needle++;
				len--;
				tmp++;
			}
			if (!*needle)
				return (ptr);
			if (!len)
				return (NULL);
			haystack = ptr;
			needle = needorig;
			len += tmp;
			tmp = 0;
		}
		haystack++;
		len--;
	}
	return (ptr);
}
