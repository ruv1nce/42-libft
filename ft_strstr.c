/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 01:51:07 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/23 05:28:53 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*ptr;
	char	*needorig;

//	ptr = NULL;
	needorig = (char *)needle;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			ptr = (char *)haystack;
			while (*haystack == *needle && *needle)
			{
				haystack++;
				needle++;
			}
			if (!*needle)
				return (ptr);
			haystack = ptr;
			needle = needorig;
		}
		haystack++;
	}
	return (NULL);
}
