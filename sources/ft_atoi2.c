/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:45:16 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/22 21:21:36 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	integer_max_min_check(long int num)
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
	return (integer_max_min_check(integer * sign));
}
