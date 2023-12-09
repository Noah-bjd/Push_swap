/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_table.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:33:16 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/22 21:20:53 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_table(t_node **a, t_node **b,
	int index_table, int table)
{
	int	i;
	int	mid;

	mid = table / 2;
	i = 0;
	while (*a && i < table)
	{
		if ((*a)->indice <= index_table)
		{
			if ((*a)->indice <= index_table - mid)
				pb(a, b);
			else
			{
				pb(a, b);
				rb(b);
			}
			i++;
		}
		else
			ra(a);
	}
}
