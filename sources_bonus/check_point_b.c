/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_point.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:20:34 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/19 21:24:55 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_b.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	isdup(char **str, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(str[i], str[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	check_dup(char **av, int ac)
{
	if (isdup(av, ac))
	{
		write(1, "error", 5);
		exit (1);
	}
}
