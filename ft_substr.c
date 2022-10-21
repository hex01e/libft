/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:50:58 by houmanso          #+#    #+#             */
/*   Updated: 2022/10/21 21:32:50 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char	*sub;

	i = 0;
	if (!s)
		return(NULL);
	sub = malloc(len * sizeof(char) + 1);
	if (!sub)
		return (NULL);
	if (start >= ft_strlen(s))
		return (sub);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}