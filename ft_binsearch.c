/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binsearch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 04:06:11 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/25 04:13:28 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_binsearch(int *arr, int num, int size)
{
	int start;
	int mid;

	start = 0;
	size--;
	while (start <= size)
	{
		mid = (start + size) / 2;
		if (arr[mid] == num)
			return (mid);
		else if (arr[mid] < num)
			start = mid + 1;
		else if (arr[mid] > num)
			size = mid - 1;
	}
	return (-1);
}
