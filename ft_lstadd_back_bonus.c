/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 00:48:46 by houmanso          #+#    #+#             */
/*   Updated: 2022/10/30 04:38:00 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst && new)
		new->next = ft_lstlast(lst);
}

int	main()
{
	t_list	*a,*b,*c,*d;
	a = ft_lstnew("aaa");
	b = ft_lstnew("bb");
	c = ft_lstnew("cc");
	d = ft_lstnew("ddd");

	ft_lstadd_back(&a , b);
	ft_lstadd_back(&a , c);
	ft_lstadd_back(&a , d);
	printf("%s", a->content);
	return 0;
}
