/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:29:15 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/22 21:14:48 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*node;

	node = *stack_a;
	*stack_a = node->next;
	push_first_node(stack_b, node);
	write(1, "pb\n", 3);
}
