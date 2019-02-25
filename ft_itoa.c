/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 23:13:46 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/25 04:54:58 by dfonarev         ###   ########.fr       */
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
	nbr = (n < 0) ? -n : n;
	if (!(sign = (n < 0) ? 0 : 1))
		len++;
	while (n /= 10)
		len++;
	if (!(str = ft_strnew(len--)))
		return (NULL);
	while (((len + 1) && sign) || (len && !sign))
	{
		str[len--] = nbr % 10 + '0';
		nbr /= 10;
	}
	!sign ? str[len] = '-' : 0;
	return (str);
}
