/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 00:51:12 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/24 02:15:53 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strimlen(char const **s)
{
	size_t			len;
	unsigned int	i;

	while (**s == ' ' || **s == '\t' || **s == '\n')
		(*s)++;
	i = 0;
	len = 0;
	while (*(*s + i))
	{
		i++;
		len++;
	}
	if (i)
		i--;
	while (*(*s + i) == ' ' || *(*s + i) == '\t' || *(*s + i) == '\n')
	{
		i--;
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s)
{
	char			*str;
	size_t			len;
	unsigned int	i;
	
	if (!s)
		return (NULL);
	len = ft_strimlen(&s);
	if(!(str = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (len)
	{
		str[i] = s[i];
		i++;
		len--;
	}
	return (str);
}
