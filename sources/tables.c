/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tables.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:38:52 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/22 21:20:30 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	search_table(t_node *stack_b, int index)
{
	if (index < (list_len(stack_b) - index))
		return (index);
	return ((list_len(stack_b) - index));
}

void	order_table(t_node **stack_b, int index_1, int i)
{
	if (i < list_len(*stack_b) / 2)
		while ((*stack_b)->indice != index_1)
			rb(stack_b);
	else
		while ((*stack_b)->indice != index_1)
			rrb(stack_b);
}
