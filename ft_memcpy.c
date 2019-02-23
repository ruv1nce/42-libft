/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 17:50:41 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/22 20:26:52 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	char		*source;

	dest = (char *)dst;
	source = (char *)src;
	i = 0;
	while (i < len)
	{
		dest[i] = source[i];
		i++;
	}
	dst = (void *)dest;
	return (dst);
}