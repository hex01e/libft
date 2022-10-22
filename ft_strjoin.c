/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.C                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:13:54 by houmanso          #+#    #+#             */
/*   Updated: 2022/10/22 18:31:59 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill(char *newstr, const char *s1, const char *s2)
{
	int		i;
	int		j;
	i = 0;
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		newlen;
	char	*newstr;

	if (s1 && s2)
	{
		newlen = ft_strlen(s1) + ft_strlen(s2);
		newstr = (char *) malloc((newlen + 1) * sizeof(char));
		if (!newstr)
			return (NULL);
		fill(newstr, s1, s2);
		return (newstr);
	}
	return (NULL);
}