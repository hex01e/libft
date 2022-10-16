/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:51:42 by houmanso          #+#    #+#             */
/*   Updated: 2022/10/11 00:40:44 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;
	int		j;

	j = 0;
	i = ft_strlen(dst);
	dstlen = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(src));
	else if (dstsize <= dstlen)
		return (ft_strlen(src) + dstsize);
	while (src[j] && i < dstsize - 1)
	{
			dst[i] = src[j];
			i++;
			j++;
	}
	dst[i] = '\0';
	return (dstlen + ft_strlen(src));
}
