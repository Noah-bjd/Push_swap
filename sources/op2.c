/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:55:07 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/22 21:13:20 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation2(t_node **stack_a, t_node **stack_b, int len)
{
	if (stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	if (len <= 100)
		state_sort(stack_a, stack_b, 5);
	else if (len <= 500)
		state_sort(stack_a, stack_b, 10);
}

void	state_sort(t_node **stack_a, t_node **stack_b, int dev)
{
	int	table;
	int	index_tab;

	table = list_len(*stack_a) / dev;
	index_tab = table;
	while (1)
	{
		sort_table(stack_a, stack_b, index_tab, table);
		if (list_len(*stack_a) == 0)
			break ;
		index_tab += table;
	}
}
