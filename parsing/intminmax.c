/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intminmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-14 14:54:12 by minokim           #+#    #+#             */
/*   Updated: 2026-03-14 14:54:12 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_skippo(int c)
{
	if ((c > 8 && c < 14) || c == 32)
	{
		return (1);
	}
	return (0);
}

long	ft_atol(const char *nptr)
{
	long	res;
	long	i;
	int		sign;

	res = 0;
	sign = 1;
	i = 0;
	while (ft_skippo(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		res = res * 10;
		res = res + nptr[i] - 48;
		i++;
	}
	return (res * sign);
}

int	int_max_min(char *str)
{
	long	num;
	int		len;

	len = ft_strlen(str);
	if (len > 12)
		return (0);
	num = ft_atol(str);
	if (num < -2147483648 || num > 2147483647)
		return (0);
	return (1);
}
