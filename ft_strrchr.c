/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 01:01:45 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/23 01:15:07 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*tmp;

	tmp = NULL;
	ch = (char)c;
	while (*s)
	{
		if (*s == ch)
			tmp = (char *)s;
		s++;
	}
	if (tmp)
		return (tmp);
	if (!ch)
		return ((char *)s);
	return (NULL);
}
