/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:28:25 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/22 21:14:06 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*node;

	node = *stack_b;
	*stack_b = node->next;
	push_first_node(stack_a, node);
	write(1, "pa\n", 3);
}
