/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 00:34:57 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/23 00:35:40 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_b.h"

void	sb(t_node **stack_a)
{
	t_node	*n1;
	t_node	*n2;

	if (stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	n1 = *stack_a;
	*stack_a = (*stack_a)->next;
	n2 = (*stack_a)->next;
	(*stack_a)->next = n1;
	n1->next = n2;
}
