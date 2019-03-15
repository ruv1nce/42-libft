/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 17:48:49 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/22 17:48:52 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** mode 0 = floor, mode 1 = ceiling
*/

int	ft_sqrt(int n, int mode)
{
	int	x;
	int	y;

	x = n;
	y = (x + 1) / 2;
	while (y < x)
	{
		x = y;
		y = (x + n / x) / 2;
	}
	if (x * x == n || !mode)
		return (x);
	else
		return (x + 1);
}
