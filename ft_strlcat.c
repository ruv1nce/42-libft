/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 22:33:48 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/22 23:43:13 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

//	if (dstsize == 0)
//		return (0);
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (!dstsize || (dstlen > (dstsize - 1)))
		return (dstlen + dstsize);
	dstsize--;
	while (*dst && dstsize)
	{
		dst++;
		dstsize--;
	}
	while (dstsize && *src)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	return (dstlen + srclen);
}
