/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_range.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 17:25:15 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/25 20:41:00 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_int_range(int start, int end)
{
	int	*tab;
	int	size;
	int	i;

	i = -1;
	if (start > end)
	{
		size = start - end + 1;
		if (!(tab = malloc(sizeof(int) * size)))
			return (NULL);
		while (++i < size)
			tab[i] = start - i;
	}
	else
	{
		size = end - start + 1;
		if (!(tab = malloc(sizeof(int) * size)))
			return (NULL);
		while (++i < size)
			tab[i] = start + i;
	}
	return (tab);
}
