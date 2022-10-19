/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:11:53 by houmanso          #+#    #+#             */
/*   Updated: 2022/10/18 13:27:51 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nlen;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	nlen = ft_strlen(needle);
	while (haystack[i] && i < len)
	{
		if (len - i >= nlen && !ft_strncmp((char *)&haystack[i], needle, nlen))
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
