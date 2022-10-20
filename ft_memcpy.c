/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:22:18 by houmanso          #+#    #+#             */
/*   Updated: 2022/10/19 20:39:19 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *) dst;
	s = (char *) src;
	i = 0;
	if (!d && !s)
		return (NULL);
	else if (!*d && !*s)
		return ("");
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
