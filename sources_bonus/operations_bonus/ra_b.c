/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:31:54 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/19 22:32:55 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_b.h"

void	ra(t_node **stack_a)
{
	t_node	*n1;
	t_node	*n2;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	n1 = *stack_a;
	*stack_a = (*stack_a)->next;
	n1->next = NULL;
	n2 = last_node(*stack_a);
	n2->next = n1;
}
