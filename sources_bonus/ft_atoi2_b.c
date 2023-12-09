/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:33:23 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/19 21:39:08 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap_b.h"

static int	integer_max(long int num)
{
	if (num < -2147483648 || num > 2147483647)
		return (1);
	else
		return (0);
}

static int	num_sign(char *str, int *sign)
{
	int	i;

	i = 0;
	if (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				*sign *= -1;
			i++;
		}
		while (str[i])
		{
			if (str[i] < '0' || str[i] > '9')
				return (1);
			i++;
		}
	}
	return (0);
}

int	ft_atoi2(char *str, int *num)
{
	int			i;
	long int	integer;
	int			sign;

	sign = -1;
	i = num_sign(str, &sign);
	if (i == 1)
		return (1);
	if (str[0] == '-' || str[0] == '+')
		i = 1;
	else
		i = 0;
	integer = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		integer *= 10;
		integer -= str[i] - '0';
		i++;
	}
	*num = sign * integer;
	return (integer_max(integer * sign));
}
