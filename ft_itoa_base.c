/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <dfonarev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 01:45:04 by dfonarev          #+#    #+#             */
/*   Updated: 2019/05/02 23:43:37 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*zero_string(void)
{
	char	*str;

	if (!(str = malloc(2)))
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

/*
** mode = 0: lowercase letters;
** mode = 1: uppercase letters
**
** check for negative numbers and base != 10 ???
*/

char		*ft_itoa_base(long long value, int base, int mode)
{
	unsigned long long	val;
	int					sign;
	int					len;
	const char			sym[] = "0123456789abcdef";
	char				*str;

	if (!value)
		return (zero_string());
	sign = (value < 0 && base == 10) ? -1 : 1;
	len = (value < 0 && base == 10) ? 1 : 0;
	val = (sign == -1) ? value * -1 : value;
	len += ft_numlen(val, base);
	str = ft_strnew(len);
	while (--len >= 0)
	{
		if (sym[val % base] >= '0' && sym[val % base] <= '9')
			str[len] = sym[val % base];
		else
			str[len] = sym[val % base] - (mode * 32);
		val /= base;
	}
	if (sign == -1)
		str[++len] = '-';
	return (str);
}
