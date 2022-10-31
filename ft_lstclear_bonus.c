/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 23:42:41 by houmanso          #+#    #+#             */
/*   Updated: 2022/10/31 14:26:16 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nxt;

	nxt = *lst;
	if (lst && *lst)
	{
		while (nxt)
		{
			nxt = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = nxt;
		}
	}
}
