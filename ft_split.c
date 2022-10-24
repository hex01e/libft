/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 02:24:02 by houmanso          #+#    #+#             */
/*   Updated: 2022/10/24 01:58:57 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_chars(const char *s, char c)
{
	int	i;
	int	n_char;

	i = 0;
	n_char = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			n_char++;
		}
	}
	return (n_char);
}

static int	count_words(const char *s, char c)
{
	int	i;
	int	n_words;

	i = 0;
	n_words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c && s[i])
			n_words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (n_words);
}

char	**ft_split(char const *s, char c)
{
	int		nwords;
	char	**str;
	int		k;
	int		i;
	int		j;
	int		len;

	i = 0;
	k = 0;
	nwords = count_words(s, c);
	str = (char **) malloc(sizeof(char *) * (nwords + 1));
	if (!str)
		return (NULL);
	while (i < nwords)
	{
		j = 0;
		len = count_chars(s, c);
		while (s[k] && s[k] == c)
			k++;
		str[i] = (char *) malloc(sizeof(char) * (len + 1));
		while (s[k] && s[k] != c)
		{
			str[i][j] = s[k];
			k++;
		}
		i++;
	}
	return (str);
}
int main()
{
	ft_split("  hi       j kellloooo dj",' ');
	return 0;
}
