/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 17:48:27 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/25 19:55:44 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_rotx(char *s, int x)
{
	int		i;
	int		ul;
	char	c;
	char	*str;

	if (!s || x < 0 || !(str = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			ul = (s[i] >= 'A' && s[i] <= 'Z') ? 64 : 96;
			c = (s[i] - ul + x) % 26;
			c = (c == 0) ? 26 + ul : c + ul;
			str[i] = c;
		}
		else
			str[i] = s[i];
		i++;
	}
	return (str);
}
