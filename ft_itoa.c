/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 23:13:46 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/25 00:03:04 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	unsigned int	len;
	int				sign;
	char			*str;

	len = 1;
	nbr = (n < 0) ? n * -1 : n;
	if (!(sign = (n < 0) ? 0 : 1))
		len++;
	while (n/= 10)
		len++;
	str = ft_strnew(len--);
	while (((len + 1) && sign) || (len && !sign))
	{
		str[len--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (!sign)
		str[len] = '-';
	return (str);
}
