/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfonarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 05:46:35 by dfonarev          #+#    #+#             */
/*   Updated: 2019/02/25 06:00:57 by dfonarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*node;

	if (!lst)
		return (NULL);
	node = (*f)(lst);
	head = node;
	while (lst->next)
	{
		lst = lst->next;
		if (!(node->next = (*f)(lst)))
		{
			free(node->next);
			return (head);
		}
		node = node->next;
	}
	return (head);
}
