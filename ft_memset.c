/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 00:43:41 by houmanso          #+#    #+#             */
/*   Updated: 2022/10/19 02:21:59 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*v;
	size_t			i;

	i = 0;
	v = (unsigned char *) b;
	while (i < len)
	{
		v[i] = (unsigned char) c;
		i++;
	}
	return ((void *)v);
}
