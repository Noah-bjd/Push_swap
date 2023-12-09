/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:28:25 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/19 22:29:07 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap_b.h"

void	pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*node;

	node = *stack_b;
	*stack_b = node->next;
	push_first_node(stack_a, node);
}
