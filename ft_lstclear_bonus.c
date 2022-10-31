/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 23:42:41 by houmanso          #+#    #+#             */
/*   Updated: 2022/10/31 00:11:04 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (lst && *lst)
	{
		while ((*lst)->next)
		{
			next = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = next;
		}
	}
	lst = NULL;
}
