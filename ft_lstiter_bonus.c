/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:19:40 by houmanso          #+#    #+#             */
/*   Updated: 2022/10/31 18:59:23 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*t_next;

	if (f && lst)
	{
		t_next = *lst;
		while (t_next)
		{
			t_next = (*lst)->next;
			f(*t_next);
		}
	}
}
