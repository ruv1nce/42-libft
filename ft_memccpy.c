/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 17:50:41 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/22 20:39:43 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;
	unsigned char	ch;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		if (source[i] == ch)
			return ((void *)&dest[i + 1]);
		i++;
	}
	return (NULL);
}
