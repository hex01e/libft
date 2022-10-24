/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 02:24:02 by houmanso          #+#    #+#             */
/*   Updated: 2022/10/24 23:15:55 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
//#define malloc(size) malloc(size);printf("(%d)",size)
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
			n_char++;
			i++;
		}
		if (s[i] == c)
			return (n_char);
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

static char	**ft_cancel(char **str, int i)
{
	int	j;

	j = 0;
	while (j <= i)
		free(str[j++]);
	free(str);
	return (NULL);
}

static char	**ft_fill(const char *s, char **str, char c, int nwords)
{
	int		k;
	int		i;
	int		j;
	int		len;

	k = 0;
	i = 0;
	while (i < nwords)
	{
		j = 0;
		len = count_chars(&s[k], c);
		while (s[k] && s[k] == c)
			k++;
		str[i] = (char *) malloc(sizeof(char) * (len + 1));
		if (!str[i])
			return (ft_cancel(str, i));
		while (s[k] && s[k] != c)
			str[i][j++] = s[k++];
		str[i][j] = '\0';
		i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		nwords;
	char	**str;

	nwords = count_words(s, c);
	str = (char **) malloc(sizeof(char *) * (nwords + 1));
	if (!str)
		return (NULL);
	str[nwords] = NULL;
	return (ft_fill(s, str, c, nwords));
}
