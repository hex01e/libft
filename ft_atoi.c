/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:37:43 by houmanso          #+#    #+#             */
/*   Updated: 2022/11/03 15:12:02 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_sign(char c, int *i, int *sign)
{
	if (c == '-')
	{
		*sign = -1;
		*i += 1;
	}
	else if (c == '+')
	{
		*sign = +1;
		*i += 1;
	}
}

int	ft_atoi(const char *str)
{
	unsigned long long	nbr;
	int					sign;
	int					i;

	i = 0;
	nbr = 0;
	sign = 1;
	while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	ft_sign(str[i], &i, &sign);
	while (str[i] && ft_isdigit(str[i]))
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	if (nbr >= 9223372036854775807 && sign == 1)
		return (-1);
	else if (nbr > 9223372036854775807 && sign == -1)
		return (0);
	return ((int) nbr * sign);
}
