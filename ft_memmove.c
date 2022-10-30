/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 01:00:42 by houmanso          #+#    #+#             */
/*   Updated: 2022/10/28 19:28:21 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*ps;
	char	*pd;

	i = len - 1;
	ps = (char *) src;
	pd = (char *) dst;
	if (src < dst)
	{
		while (i >= 0)
		{
			pd[i] = ps[i];
			i--;
		}
	}
	else
		ft_memcpy(pd, ps, len);
	return (dst);
}
