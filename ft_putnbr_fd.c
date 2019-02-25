/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 00:42:07 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/25 02:53:34 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;
	int				tmp;
	int				len;
	char			c;

	n == 0 ? write(fd, "0", 1) : 0;
	n < 0 ? write(fd, "-", 1) : 0;
	nbr = (n < 0) ? n * -1 : n;
	len = 1;
	tmp = n;
	while (tmp /= 10)
		len++;
	while (len--)
	{
		c = (nbr / ft_pow(10, len)) % 10 + '0';
		write(fd, &c, 1);
	}
}
