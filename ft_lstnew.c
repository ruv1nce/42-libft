/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 17:47:55 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/23 03:25:05 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!content)
		content_size = 0;
	if (!(new = malloc(content_size + sizeof(size_t) + sizeof(t_list *))))
		return (NULL);
	new->content = (void *)content;
	new->content_size = content_size;
	new->next = NULL;
	return (new);
}
