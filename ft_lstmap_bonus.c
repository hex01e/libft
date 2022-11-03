/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:26:56 by houmanso          #+#    #+#             */
/*   Updated: 2022/11/03 17:20:49 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;

	head = NULL;
	if (lst && f && del)
	{
		head = ft_lstnew(f(lst->content));
		if (!head)
			return (NULL);
		lst = lst->next;
		while (lst)
		{
			new = ft_lstnew(f(lst->content));
			if (!new)
			{
				ft_lstclear(&head, del);
				return (NULL);
			}
			ft_lstadd_back(&head, new);
			lst = lst->next;
		}
	}
	return (head);
}
