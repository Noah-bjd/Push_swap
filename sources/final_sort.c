/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:47:43 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/22 21:21:44 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	look_for_index(t_node *stack_b, int index_1)
{
	int	x;

	x = 0;
	while (stack_b)
	{
		if (stack_b->indice == index_1)
			return (x);
		x++;
		stack_b = stack_b->next;
	}
	return (-1);
}

static void	final_sorting(t_node **stack_a, t_node **stack_b, int *index, int j)
{
	int	i;

	order_table(stack_b, *index - 1, j);
	pa(stack_a, stack_b);
	i = look_for_index(*stack_b, *index);
	order_table(stack_b, *index, i);
	(*index)--;
	pa(stack_a, stack_b);
	sa(stack_a);
}

void	final_sort(t_node **stack_a, t_node **stack_b)
{
	int	i_0;
	int	i_1;
	int	index;

	index = list_len(*stack_b);
	while (index > 0)
	{
		index--;
		i_0 = look_for_index(*stack_b, index);
		i_1 = look_for_index(*stack_b, index - 1);
		if (index == 0
			|| search_table(*stack_b, i_0) < search_table(*stack_b, i_1))
		{
			order_table(stack_b, index, i_0);
			pa(stack_a, stack_b);
		}
		else
			final_sorting(stack_a, stack_b, &index, i_1);
	}
}
